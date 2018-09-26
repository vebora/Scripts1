//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://lbodn.deloittenet.deloitte.com/'", "snapshot=Action_1.inf");
	truclient_step("2", "Type 'usqaex\\'+LR.getParam('username'); in User Account emailbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type ********** in Password passwordbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Sign in button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Clear response(s) link", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Yes, clear response(s) button", "snapshot=Action_6.inf");
	truclient_step("7", "For ( var i = 0 ; i < 31 ; i++ )", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Click on Firm Strengths", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Click on Clear response(s) link", "snapshot=Action_7.2.inf");
		truclient_step("7.3", "Click on Yes, clear response(s)", "snapshot=Action_7.3.inf");
		truclient_step("7.4", "Wait until element (1) exists", "snapshot=Action_7.4.inf");
	}
	truclient_step("8", "Click on Firm Issues", "snapshot=Action_8.inf");

	return 0;
}
