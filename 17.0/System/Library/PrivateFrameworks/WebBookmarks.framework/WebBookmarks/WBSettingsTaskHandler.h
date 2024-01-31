@class WebBookmarksSettingsGateway, WBSettingsTask, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSettingsTaskHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tasks;
    WBSettingsTask *_currentTask;
    long long _currentRetryCount;
    WebBookmarksSettingsGateway *_settingsGateway;
    id _backgroundTaskAssertionToken;
}

@property (copy, nonatomic) id /* block */ startBackgroundTaskAssertionBlock;
@property (copy, nonatomic) id /* block */ finishBackgroundTaskAssertionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)_enqueueTask:(id)a0;
- (void)_attemptCurrentTask;
- (void)_currentTaskAttemptDidFinishWithError:(id)a0;
- (void)_finishCurrentTask;
- (void)_performNextTask;
- (BOOL)_shouldEnqueueTask:(id)a0;
- (void)enqueueTask:(id)a0;

@end
