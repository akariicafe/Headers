@class MPRouteLabel, MPAVRoute, NSString, MRUVisualStylingProvider, MRUMarqueeLabel, UIView, UILabel;

@interface MRUNowPlayingLabelView : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (retain, nonatomic) MRUMarqueeLabel *titleMarqueeView;
@property (retain, nonatomic) MRUMarqueeLabel *subtitleMarqueeView;
@property (retain, nonatomic) MRUMarqueeLabel *placeholderMarqueeView;
@property (retain, nonatomic) UILabel *heightSizingLabel;
@property (retain, nonatomic) MPAVRoute *route;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long layout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marqueeFadeEdgeInsets;
@property (nonatomic) BOOL showRoute;
@property (nonatomic) BOOL showSubtitle;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (nonatomic) BOOL adjustsLabelsWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePlaceholderTextAlignment;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForTextInLabel:(id)a0 availableSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateMarquee;
- (double)heightForTextInLabel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
