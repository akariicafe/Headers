@class NSMutableSet;

@interface PKAsyncTaskProgressTracker : NSObject {
    NSMutableSet *_completionHandlers;
}

@property (readonly, nonatomic) unsigned long long status;

- (id)init;
- (void).cxx_destruct;
- (void)taskDidComplete;
- (void)_executeCompletionHandlers;
- (void)notifyOnCompletion:(id /* block */)a0;
- (void)taskDidStart;

@end
