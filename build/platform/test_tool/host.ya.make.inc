IF (HOST_OS_DARWIN AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1903430514)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1903468113)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_PPC64LE)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1903430309)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1903467824)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1903430760)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1903468394)
ELSEIF (HOST_OS_WINDOWS AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1903430064)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1903467644)
ENDIF()
