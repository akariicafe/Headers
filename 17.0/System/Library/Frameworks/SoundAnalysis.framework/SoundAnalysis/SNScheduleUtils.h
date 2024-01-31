@interface SNScheduleUtils : NSObject

+ (BOOL)scheduleOntoBudgetedQueue:(id)a0 block:(id /* block */)a1 blockCost:(long long)a2 queueFundsSpent:(void *)a3 queueFundsEarned:(void *)a4 queueStopped:(void *)a5;
+ (BOOL)startStopServiceWithClientCount:(long long)a0 serviceIsRunning:(BOOL)a1 startAction:(id /* block */)a2 stopAction:(id /* block */)a3;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })updateHeartbeatTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 givenCurrentAudioTime:(id)a1 heartbeatIntervalSeconds:(double)a2 preferredIntervalTimescale:(int)a3 reanchor:(id /* block */)a4 action:(id /* block */)a5 error:(id *)a6;

- (id)init;

@end
