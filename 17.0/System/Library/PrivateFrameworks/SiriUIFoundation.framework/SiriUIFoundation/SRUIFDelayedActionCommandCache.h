@class NSMutableDictionary;
@protocol SRUIFDelayedActionCommandCacheDelegate;

@interface SRUIFDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

@property (weak, nonatomic) id<SRUIFDelayedActionCommandCacheDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_commandHandler;
- (void)_invalidateDelayedActionTimer:(id)a0 withKey:(id)a1;
- (void)_performCommandsWithDelayedActionCommand:(id)a0;
- (void)_performDelayedActionCommandTimerAction:(id)a0;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)a0 completion:(id /* block */)a1;
- (void)enqueueDelayedActionCommand:(id)a0 completion:(id /* block */)a1;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;

@end
