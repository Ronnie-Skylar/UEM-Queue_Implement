// @region Function Definition. //

void QueueInsert(int Queue[], int input){
	Queue[++g_LastOfQueue] = input;
	return;
}

int QueueRemove(int Queue[]){

	int RemovedValue = Queue[0];

	for(int i = 1; i <= g_LastOfQueue; i++)
		Queue[i - 1] = Queue[i];

	g_LastOfQueue--;

	return RemovedValue;
}

// @end region //