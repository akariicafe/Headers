@class SearchUICardSectionRowModel, UIViewController, NSString, UIView, SFCardSection, UIMenu;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIHighlightTarget>

@property (retain, nonatomic) SearchUICardSectionRowModel *rowModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *chevronView;
@property BOOL isCompactWidth;
@property (retain, nonatomic) UIMenu *userReportMenu;
@property (readonly, nonatomic) SFCardSection *section;
@property (readonly) UIViewController *embeddedViewController;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (readonly, nonatomic) UIView *viewForQuickLookZoomTransitionSource;
@property (readonly, nonatomic) UIView *viewForForcedFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL highlightFrameMatchesHighlightView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightFrame;
@property (readonly, nonatomic) UIView *highlightReferenceView;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;
+ (BOOL)hasLeadingImageForCardSection:(id)a0;
+ (BOOL)prefersNoSeparatorAboveRowModel:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForStyle:(int)a0 cellView:(id)a1 leadingView:(id)a2 leadingTextView:(id)a3;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)returnKeyPressed;
- (BOOL)setupManualFocus;
- (void).cxx_destruct;
- (void)removeManualFocus;
- (BOOL)needsInternalFocus;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)requestRemovalFromEnclosingView;
- (BOOL)configureUserReportButton:(id)a0;
- (void)didInvalidateSizeAnimate:(BOOL)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)openPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)tabKeyPressed;
- (double)trailingMarginForAccessory:(id)a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
