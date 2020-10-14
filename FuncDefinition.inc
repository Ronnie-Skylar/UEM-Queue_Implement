// @region Utilities function definitions //

void Init(){
	setColor(WHITE);
	g_SizeOfQueue = 0;
	g_LastOfQueue = -1;

	return;
}

void PromptToContinue(void){
	printf("Press any key to continue.\n");
	getch();

	return;
}

void PushLine(void){
	printf("\n");

	return;
}

void RequestQueueSize(void){
	printf("Enter the size of the queue: ");
	PushLine();

	scanf("%d", &g_SizeOfQueue);

	int QueueArray[g_SizeOfQueue];
	InitQueue(QueueArray);

	cls();

	ShowQueueMenu(QueueArray);

	getch();

	return;
}

void InitQueue(int Queue[]){
	for(int i = 0; i < g_SizeOfQueue; i++)
		Queue[i] = 0;

	return;
}

void ArrayPrint(int Array[]){

	if(g_LastOfQueue == -1)
		Debug("The Queue is empty.", DebugWarning);
	else if(g_LastOfQueue >= g_SizeOfQueue)
		Debug("The index is greater than the size of the Queue. Buffer Overflow!", DebugError);
	else if(g_LastOfQueue == 0)
		printf("The elements in the Queue is: ");
	else if(g_LastOfQueue > 0)
		printf("The elements in the Queue are: ");
	
	PushLine();

	for(int i = 0; i <= g_LastOfQueue; i++)
		printf("%d ", Array[i]);

	PushLine();

	return;
}

void ReturnOrdinal(char* pzPostfix, int ArraySize, int number){
	char _positionPostfix[5] = "";

	int lastNumber = number % 10;

	if(lastNumber == 1)
		strncpy(_positionPostfix, "st", ArraySize(_positionPostfix) - 1);
	else if(lastNumber == 2)
		strncpy(_positionPostfix, "nd", ArraySize(_positionPostfix) - 1);
	else if(lastNumber == 3)
		strncpy(_positionPostfix, "rd", ArraySize(_positionPostfix) - 1);
	else
		strncpy(_positionPostfix, "th", ArraySize(_positionPostfix) - 1);

	strncpy(pzPostfix, _positionPostfix, ArraySize - 1);
}

boolean IsQueueFull(void){
	if(g_LastOfQueue == g_SizeOfQueue - 1)
		return TRUE;
	else
		return FALSE;
}

boolean IsQueueEmpty(void){
	if(g_LastOfQueue == - 1)
		return TRUE;
	else
		return FALSE;
}

// @endregion //