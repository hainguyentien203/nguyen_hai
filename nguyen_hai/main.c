#include <stdio.h>
#include <string.h>
#include <Windows.h>
DWORD WINAPI Thread_1(_In_ LPVOID lpParameter) {
	while (1) {
		printf("Thread 1 is running ...\n");
		Sleep(1000);
	}
}
DWORD WINAPI Thread_2(_In_ LPVOID lpParameter) {
	while (1) {
		printf("Thread 2 is running ...\n");
		Sleep(1000);
	}
}
void main() {
	HANDLE thread_1 = CreateThread(NULL, 1024, Thread_1, NULL, 0, NULL);
	HANDLE thread_2 = CreateThread(NULL, 1024, Thread_2, NULL, 0, NULL);
	int count = 0;
	while (1) {
		printf("main is running ...\n");
		Sleep(1000);
		if (count++ == 5) {
			printf("suspend thread 1: %d\n", SuspendThread(Thread_1));
			printf("suspend thread 1: %d\n", SuspendThread(Thread_1));
		}
	}
}
