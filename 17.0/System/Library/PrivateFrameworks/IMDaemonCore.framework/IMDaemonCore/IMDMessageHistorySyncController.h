@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (void)dealloc;
- (void)replayControllerWantsToSync;
- (void)_evaluateStateAndActIfNeeded;
- (void)ckChatSyncControllerWantsToSync;
- (void)_scheduleNextEvaluation;
- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)IDSTransportLogWantsToSync;

@end
