@interface SATaskStateInTransition : SATaskState {
    unsigned long long _transitionType;
}

- (unsigned long long)transitionType;
- (id)initWithKCDataTransitioningTask:(const struct transitioning_task_snapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; int x3; char x4[32]; } *)a0 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x0; unsigned long long x1; } *)a1 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a2 andDonatingUniquePids:(id)a3 startTimestamp:(id)a4 endTimestamp:(id)a5 startSampleIndex:(unsigned long long)a6 endSampleIndex:(unsigned long long)a7;

@end
