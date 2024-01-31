@class UIView, NSString, NSArray, SearchUIRowModel, CALayer, UIViewPropertyAnimator, SearchUIDragSource, UIViewController, TLKProminenceView, SearchUIBackgroundColorView;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUICollectionViewCell : UICollectionViewListCell <SearchUIBackgroundColorViewProtocol, SearchUIHighlightTarget>

@property (retain, nonatomic) UIView *dummyBackgroundView;
@property (retain, nonatomic) SearchUIBackgroundColorView *backgroundPlatterView;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (nonatomic) long long resolvedFocusStyle;
@property (retain) TLKProminenceView *selectedBackgroundView;
@property (retain, nonatomic) UIView *selectedOverlayView;
@property (retain, nonatomic) UIViewPropertyAnimator *selectionAnimator;
@property (retain, nonatomic) SearchUIDragSource *dragSource;
@property (nonatomic) BOOL useSystemSizing;
@property (readonly, nonatomic) UIView *sizingView;
@property (weak, nonatomic) id<SearchUIFeedbackDelegateInternal> delegate;
@property (nonatomic) long long sectionBackgroundStyle;
@property (nonatomic) long long searchui_focusStyle;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (nonatomic) int sfSeparatorStyle;
@property (nonatomic) CALayer *linkLayer;
@property (readonly) NSArray *visibleResults;
@property (readonly) UIViewController *embeddedViewController;
@property (readonly) UIView *viewForForcedFocus;
@property (nonatomic) unsigned long long maskedCorners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL highlightFrameMatchesHighlightView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (readonly, nonatomic) UIView *highlightReferenceView;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (long long)_focusItemDeferralMode;
- (id)focusEffect;
- (void)traitCollectionDidChange:(id)a0;
- (void)returnKeyPressed;
- (void)setHighlighted:(BOOL)a0;
- (id)viewContainingContent;
- (void)prepareForReuse;
- (BOOL)setupManualFocus;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)removeManualFocus;
- (void)layoutSubviews;
- (BOOL)_disableRasterizeInAnimations;
- (BOOL)needsInternalFocus;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)isExpandable;
- (void)setSelected:(BOOL)a0;
- (void)didMoveToWindow;
- (BOOL)_appliesLayoutAttributesMaskingToReusableView;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateFocusStyleWithAppearance:(id)a0;
- (void)animateFocusScaleDownEffectIsHighlighted:(BOOL)a0 isSelected:(BOOL)a1 appearance:(id)a2;
- (void)addLinkLayer:(id)a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateCornerMasks;
- (void)updateCornerRadius:(double)a0;

@end
