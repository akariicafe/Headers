@class NSArray, NSString, NSMutableSet;
@protocol SBHIconLayoutHidingAssertionDelegate;

@interface SBHIconLayoutHidingAssertion : NSObject <BSDescriptionProviding, SBHIconLayoutHidingUpdating> {
    NSMutableSet *_icons;
}

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) id<SBHIconLayoutHidingAssertionDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long listMutationOptions;
@property (readonly, nonatomic) unsigned long long folderMutationOptions;
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
- (BOOL)referencesIcon:(id)a0;
- (id)initWithDelegate:(id)a0 icons:(id)a1 reason:(id)a2 options:(unsigned long long)a3;
- (BOOL)referencesIconInListModel:(id)a0;

@end
