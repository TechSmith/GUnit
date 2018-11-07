// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

//
// Google Test Framework
//
#pragma warning(push)
#pragma warning(disable : 28182 4996)  // Dereferencing NULL pointer
#define GTEST_ENV_HAS_STD_TUPLE_ 1
#include <gmock/gmock-generated-nice-strict.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#pragma warning(pop)
