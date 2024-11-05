#include "pch.h"
#include "CppUnitTest.h"
#include "../lab82/lab82.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0, countWordsStartingWithB(""), L"Empty string should return 0");

			Assert::AreEqual(0, countWordsStartingWithB("apple orange grape"), L"No words starting with 'b'");

			Assert::AreEqual(1, countWordsStartingWithB("banana apple orange"), L"One word starts with 'b'");

			Assert::AreEqual(3, countWordsStartingWithB("banana bear bird"), L"Three words start with 'b'");

			Assert::AreEqual(3, countWordsStartingWithB("Banana bear Bird"), L"Case-insensitive check");

			Assert::AreEqual(3, countWordsStartingWithB("bird, banana! bear."), L"Words with punctuation");

			Assert::AreEqual(1, countWordsStartingWithB("  banana apple  "), L"Spaces before and after");
		}
	};
}
