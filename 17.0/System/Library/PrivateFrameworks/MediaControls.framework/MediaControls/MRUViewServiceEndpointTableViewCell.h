@class NSString, MRUVisualStylingProvider, UIView, MRUNowPlayingCellContentView;

@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (readonly, nonatomic) UIView *separatorView;
@property (readonly, nonatomic) MRUNowPlayingCellContentView *cellContentView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)a0;

@end
