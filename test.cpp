#include <gtest/gtest.h>
#include "implementation.h"

TEST(BridgePatternTest, ConcreteImplementationATest) {
    ConcreteImplementationA impl;
    testing::internal::CaptureStdout();
    impl.Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteImplementationA Operation\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

