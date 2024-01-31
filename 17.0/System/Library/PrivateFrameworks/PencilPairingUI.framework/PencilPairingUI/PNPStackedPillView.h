@class UIColor, NSString, PNPDeviceState, UIView, UILabel;

@interface PNPStackedPillView : UIView <PNPDeviceStateConfigurable> {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    NSString *_topLabelString;
    NSString *_bottomLabelString;
}

@property (retain, nonatomic) UIColor *bottomLabelColor;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topString:(id)a1 bottomString:(id)a2;

@end
