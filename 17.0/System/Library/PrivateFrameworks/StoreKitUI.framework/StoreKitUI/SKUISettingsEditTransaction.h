@class NSSet, NSLock, NSMutableSet;
@protocol SKUISettingsEditTransactionDelegate;

@interface SKUISettingsEditTransaction : NSObject {
    NSSet *_all;
    id /* block */ _commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    BOOL _success;
}

@property (weak, nonatomic) id<SKUISettingsEditTransactionDelegate> delegate;

- (void)beginTransaction;
- (void)commitTransaction;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)rollbackTransaction;
- (void)_delegateDidCompleteTransaction;
- (void)_finalizeCommit;
- (void)_delegateDidFailTransaction;
- (void)_delegateWillBeginTransaction;
- (void)_delegateWillCommitTransaction;
- (void)_settingDescription:(id)a0 completedWithSuccess:(BOOL)a1;
- (void)cancelTransaction;
- (id)initWithSettingDescriptions:(id)a0;
- (BOOL)isCommiting;

@end
