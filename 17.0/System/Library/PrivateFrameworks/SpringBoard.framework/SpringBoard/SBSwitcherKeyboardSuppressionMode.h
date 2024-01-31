@class NSSet, NSString;

@interface SBSwitcherKeyboardSuppressionMode : NSObject <BSDescriptionProviding>

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *appLayouts;
@property (nonatomic) BOOL applyAssertionEvenIfAppIsHostingTheKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suppressionModeNone;
+ (id)suppressionModeForAllScenes;
+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)a0;

- (id)_initWithAppLayouts:(id)a0 suppressionType:(long long)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)suppressesAllScenes;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)suppressesSwitcherScenesOnly;
- (BOOL)isEqual:(id)a0;
- (BOOL)suppressesNoScenes;

@end
