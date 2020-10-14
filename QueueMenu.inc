// @region Function Definition for queue menu. //

void ShowQueueMenu(int Queue[]){
	
	printf("Enter the number to execute an operation: ");
	PushLine();

	printf("1. Push (Insert) element."), PushLine();
	printf("2. Pop (Remove) element."), PushLine();
	printf("3. Show elements."), PushLine();
	printf("4. Quit."), PushLine();

	int _userChoice = 0;

	scanf("%d", &_userChoice);


	ProcessMenuChoice(Queue, _userChoice);

	return;
}

void ProcessMenuChoice(int Queue[], int choice){

	enum e_ChoiceNames{
		e_Choice_Push = 1,
		e_Choice_Pop = 2,
		e_Choice_Show = 3,
		e_Choice_Exit = 4
	};

	do{

		cls();

		switch(choice){

			case ((int)e_Choice_Push):{

				if(IsQueueFull()){
					Debug("The queue is FULL. No more elements can be pushed into it!", DebugWarning);
					PushLine(), PushLine();
					PromptToContinue();
				}
				else{
					int input;
					printf("Enter the value that you want to push into the stack.");
					PushLine();
					scanf("%d", &input);
					QueueInsert(Queue, input);
					char message[128];
					char Ordinal[5];
					ReturnOrdinal(Ordinal, ArraySize(Ordinal), g_LastOfQueue + 1);
					sprintf(message, "%d has been pushed into the %d%s position.",
						input, g_LastOfQueue + 1, Ordinal
					);
					Debug(message, DebugLog);
					PromptToContinue();
				}

				break;
			}

			case ((int)e_Choice_Pop):{

				if(IsQueueEmpty()){
					Debug("The queue is EMPTY. No more elements can be popped!", DebugWarning);
					PushLine(), PushLine();
					PromptToContinue();	
				}
				else{
					int RemovedValue = QueueRemove(Queue);
					char message[128];
					sprintf(message, "The value %d has been popped.",
						RemovedValue
					);
					Debug(message, DebugLog);
					PromptToContinue();
				}
				break;
			}

			case (int)e_Choice_Show:{
				ArrayPrint(Queue);
				PromptToContinue();
				break;
			}

			case (int)e_Choice_Exit:{
				printf("Program has been terminated.");
				PushLine();
				PromptToContinue();
				exit(0);
				break;
			}

			default:{
				//printf("The given input is invalid.");
				Debug("The given input is invalid.", DebugError);
				PushLine();
				PromptToContinue();
				break;
			}
		}
		cls();
		ShowQueueMenu(Queue);

	}
	while(TRUE);

	return;
}

// @endregion //