@class UIFont, NSSet, NSMutableDictionary, NSString, STUIStatusBar;

@interface STUIStatusBarVisualProvider_Test : NSObject <STUIStatusBarVisualProvider>

@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) NSMutableDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) NSMutableDictionary *overriddenStyleAttributes;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (readonly, nonatomic) NSSet *allRegionIdentifiers;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;

- (id)init;
- (id)styleAttributesForStyle:(long long)a0;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;
- (void)setOrderedDisplayItemPlacements:(id)a0 inRegionWithIdentifier:(id)a1;
- (void)setOverriddenStyleAttributes:(id)a0 forDisplayItemWithIdentifier:(id)a1;

@end
