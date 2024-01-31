@class NSString, NSProgress, NSFileHandle, NSTask;
@protocol SKTaskDataParser;

@interface SKTask : NSObject <SKWaitable, NSProgressReporting>

@property (readonly) NSTask *task;
@property (retain) NSProgress *progress;
@property (retain, nonatomic) id<SKTaskDataParser> stdoutParser;
@property (retain, nonatomic) id<SKTaskDataParser> stderrParser;
@property (readonly) NSFileHandle *stdoutHandle;
@property (readonly) NSFileHandle *stderrHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)endedSuccessfully;
- (id)initWithExecutable:(id)a0;
- (id)initWithExecutable:(id)a0 arguments:(id)a1;
- (BOOL)waitWithError:(id *)a0;

@end
