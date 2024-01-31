@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (id)init;
- (void)dealloc;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;
- (void)messageProcessingTaskAdded:(id)a0;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0;
- (void)scheduleInitialProcessingCheck;
- (void)_processingTimerFired;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;

@end
