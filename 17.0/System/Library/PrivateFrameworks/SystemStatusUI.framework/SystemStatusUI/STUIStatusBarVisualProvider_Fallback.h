@class UIFont, NSArray, NSString, STUIStatusBar;

@interface STUIStatusBarVisualProvider_Fallback : NSObject <STUIStatusBarVisualProvider>

@property (class, readonly, nonatomic) BOOL scalesWithScreenNativeScale;
@property (class, readonly, nonatomic) BOOL requiresIterativeOverflowLayout;

@property (retain, nonatomic) NSArray *placements;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;

- (id)styleAttributesForStyle:(long long)a0;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;

@end
