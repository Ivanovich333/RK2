#include <gtest/gtest.h>
#include "implementation.h"

TEST(BridgePatternTest, ObjectCreationTest) {
    ConcreteImplementationA impl;
    EXPECT_NO_THROW();
}

TEST(BridgePatternTest, OperationMethodTest) {
    ConcreteImplementationA impl;
    testing::internal::CaptureStdout();
    impl.Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteImplementationA Operation\n");
}

TEST(BridgePatternTest, PolymorphismTest) {
    Implementation* impl = new ConcreteImplementationA();
    testing::internal::CaptureStdout();
    impl->Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteImplementationA Operation\n");
    delete impl;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

