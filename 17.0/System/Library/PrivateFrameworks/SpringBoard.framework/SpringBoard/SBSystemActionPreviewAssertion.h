@class BSContinuousMachTimer, NSString, SBSystemActionPreviewSettings, NSMutableOrderedSet;

@interface SBSystemActionPreviewAssertion : NSObject <SBSystemActionPreviewInvalidatable> {
    id /* block */ _urgencyInvalidationBlock;
    id /* block */ _finalInvalidationBlock;
    SBSystemActionPreviewSettings *_settings;
    BSContinuousMachTimer *_urgencyInvalidationTimer;
    BSContinuousMachTimer *_invalidationTimer;
    double _performedTime;
    NSMutableOrderedSet *_expansionInvalidationBlocks;
    NSMutableOrderedSet *_invalidationBlocks;
    NSString *_identifier;
    NSString *_reason;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isUrgent) BOOL urgent;
@property (readonly, nonatomic, getter=isExpanding) BOOL expanding;
@property (readonly, nonatomic, getter=isProminent) BOOL prominent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)a0;
- (id)acquireAssertionForInvalidatingAfterDefaultTimeoutForActionPerformed;
- (void)addExpansionInvalidationBlock:(id /* block */)a0;
- (void)invalidateAfterDefaultTimeoutForActionCancelled;
- (void)invalidateWithResult:(unsigned long long)a0;

@end
