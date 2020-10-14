// @region All function Declaration //

void Init(void) __attribute__((constructor));		// Since this is the constructor of the program. This will run first before main() //
void PromptToContinue(void);
void PushLine(void);
void RequestQueueSize();
void InitQueue(int Queue[]);

void ShowQueueMenu(int Queue[]);
void ProcessMenuChoice(int Queue[], int choice);
void ArrayPrint(int Array[]);

boolean IsQueueFull(void);
boolean IsQueueEmpty(void);

void QueueInsert(int Queue[], int input);
int QueueRemove(int Queue[]);

void ReturnOrdinal(char* pzPostfix, int ArraySize, int number);
// @endregion //