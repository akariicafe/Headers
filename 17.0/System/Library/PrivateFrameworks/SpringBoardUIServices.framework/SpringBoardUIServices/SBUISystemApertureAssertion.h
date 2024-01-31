@class NSString, NSArray, NSMutableOrderedSet, NSDate;

@interface SBUISystemApertureAssertion : NSObject <SBUISAInvalidatable> {
    NSMutableOrderedSet *_invalidationBlocks;
    NSString *_invalidationReason;
}

@property (readonly, copy, nonatomic, getter=_invalidationReason) NSString *invalidationReason;
@property (readonly, copy, nonatomic, getter=_descriptionConstituents) NSArray *descriptionConstituents;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)a0;

@end
