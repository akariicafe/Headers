@class NSMutableArray;

@interface MPSGraphExecutableExecutionDescriptor : MPSGraphObject <NSCopying> {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}

@property BOOL enableCommitAndContinue;
@property (copy) id /* block */ scheduledGraphHandler;
@property (copy) id /* block */ completionGraphHandler;
@property BOOL enableProfilingOpNames;
@property BOOL briefProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property BOOL generateRuntimeExecutionReport;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGraphExecutionDescriptor:(id)a0;
- (void)signalEvent:(id)a0 atExecutionEvent:(unsigned long long)a1 value:(unsigned long long)a2;
- (void)waitForANEPrePowerUpEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;

@end
