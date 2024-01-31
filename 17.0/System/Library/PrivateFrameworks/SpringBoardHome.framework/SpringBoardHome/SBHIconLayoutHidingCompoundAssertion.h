@class NSArray, NSString, NSMapTable, NSMutableArray;
@protocol SBHIconLayoutHidingCompoundAssertionInvalidationHandler;

@interface SBHIconLayoutHidingCompoundAssertion : NSObject <SBHIconLayoutHidingUpdating> {
    NSMutableArray *_icons;
    NSMapTable *_childAssertions;
}

@property (readonly, nonatomic) id<SBHIconLayoutHidingCompoundAssertionInvalidationHandler> invalidationHandler;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addIcon:(id)a0;
- (void)dealloc;
- (void)setOptions:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addAssertion:(id)a0 forChild:(id)a1;
- (void)addAssertionFromChild:(id)a0;
- (id)initWithInvalidationHandler:(id)a0 icons:(id)a1 reason:(id)a2 options:(unsigned long long)a3;
- (void)removeAndInvalidateAssertionsForChild:(id)a0;

@end
