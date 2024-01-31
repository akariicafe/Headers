@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _ShellLauncher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _launching;
    NSMutableArray *_launchCompletions;
}

- (id)init;
- (void).cxx_destruct;
- (void)launchWithCompletion:(id /* block */)a0;
- (void)_queue_completeWithPid:(int)a0 error:(id)a1;
- (void)_queue_launchWithCompletion:(id /* block */)a0;
- (void)_queue_launchWithRetries:(int)a0;

@end
