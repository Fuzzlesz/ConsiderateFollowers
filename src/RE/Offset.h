#pragma once

namespace RE
{
	namespace Offset
	{
		namespace AIProcess
		{
			constexpr auto ClearGreetingInfoData = REL::ID(38338);
			constexpr auto ProcessGreet = REL::ID(38202);
		}

		namespace Character
		{
			constexpr auto IsTalking = REL::ID(36277);
			constexpr auto GetProccess = REL::ID(36940);
			constexpr auto GetEssential = REL::ID(36246);
		}

		namespace DialogueItem
		{
			constexpr auto FirstResponse = REL::ID(34415);
			constexpr auto RunResult = REL::ID(34418);
		}

		namespace PlayerCharacter
		{
			constexpr auto GetSleepRestState = REL::ID(39342);
		}

		namespace TESTopic
		{
			constexpr auto CreateDialogueItem = REL::ID(25014);
		}
	}
}