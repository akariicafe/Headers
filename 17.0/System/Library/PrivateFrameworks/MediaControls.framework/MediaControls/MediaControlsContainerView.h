@class UIVisualEffectView, MediaControlsTimeControl, MPCPlayerResponse, MediaControlsTransportStackView;

@interface MediaControlsContainerView : UIView

@property (retain, nonatomic) UIVisualEffectView *primaryVisualEffectView;
@property (nonatomic) long long style;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen;
@property (retain, nonatomic) MediaControlsTransportStackView *transportStackView;
@property (retain, nonatomic) MediaControlsTimeControl *timeControl;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateStyle;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setRatingActionSheetDelegate:(id)a0;

@end
