@class SWHighlight, SLAttributionView, NSArray, NSString, UIMenu;

@interface SWAttributionView : UIView <SLAttributionViewDelegate>

@property (retain, nonatomic) SLAttributionView *slAttributionView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) SWHighlight *highlight;
@property (nonatomic) long long displayContext;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (readonly, nonatomic) UIMenu *highlightMenu;
@property (retain, nonatomic) NSString *menuTitleForHideAction;
@property (retain, nonatomic) UIMenu *supplementalMenu;
@property (nonatomic) BOOL enablesMarquee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentTranscriptForAttributionIdentifier:(id)a0 attachmentGUID:(id)a1 presentingViewController:(id)a2;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)closeButton;
- (void)useBannerLayout;
- (void)_sendFeedbackForCurrentDisplayContext;
- (void)_updateSLAttributionViewAlignment;
- (void)_updateSLAttributionViewBackgroundStyle;
- (void)_updateSLAttributionViewEnablesMarquee;
- (void)_updateSLAttributionViewHideMenuItemTitle;
- (void)_updateSLAttributionViewSupplementalMenu;

@end
