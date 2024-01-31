@class NotesBarBackgroundView, NSString, UIView;
@protocol ICAccessibilityChildReparentingProvider, ICAccessibilityChildReparentingController;

@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget>

@property (retain, nonatomic) NotesBarBackgroundView *topBarView;
@property (weak, nonatomic) id<ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible;
@property (weak, nonatomic) id<ICAccessibilityChildReparentingController> axChildReparentingController;
@property (nonatomic) BOOL hasBarBlur;
@property (nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)accessibilityElements;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setOverrideUserInterfaceStyle:(long long)a0;
- (BOOL)_accessibilityIsScannerGroup;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)a0 bottomToolbar:(id)a1 toContainer:(id)a2;
- (id)_findDescendantAXElementOfClass:(Class)a0;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)a0 toContainer:(id)a1;
- (void)addSubviewAboveAllViews:(id)a0;
- (void)applyContentViewBezelsStandalone:(BOOL)a0;
- (void)reparentAccessibilityChildrenOfElement:(id)a0;
- (void)scrollView:(id)a0 didChangeContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)scrollViewDescendantOfView:(id)a0;
- (void)setContentView:(id)a0 useSafeAreaLayoutGuide:(BOOL)a1 standalone:(BOOL)a2 needsAdditionalBottomMargin:(BOOL)a3 needsAdditionalLeadingMargin:(BOOL)a4;
- (void)setContentView:(id)a0 useSafeAreaLayoutGuide:(BOOL)a1 topMargin:(double)a2 bottomMargin:(double)a3 leadingMargin:(double)a4 trailingMargin:(double)a5 standalone:(BOOL)a6;
- (void)updateContentViewBezelsStandalone:(BOOL)a0 needsAdditionalBottomMargin:(BOOL)a1 needsAdditionalLeadingMargin:(BOOL)a2;

@end
