@class NSArray;

@interface WeatherMaps.ControlsView : UIView {
    void /* unknown type, empty encoding */ buttonGroups;
    void /* unknown type, empty encoding */ scaleModel;
    void /* unknown type, empty encoding */ mapViewForZoomControl;
    void /* unknown type, empty encoding */ menuDelegate;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ buttonGroupViews;
    void /* unknown type, empty encoding */ scaleView;
    void /* unknown type, empty encoding */ zoomControl;
    void /* unknown type, empty encoding */ windOverlayHintManager;
    void /* unknown type, empty encoding */ backgroundEffectManagerBlur;
    void /* unknown type, empty encoding */ backgroundEffectManagerUltraThin;
    void /* unknown type, empty encoding */ discoverWindHintArrowOffset;
    void /* unknown type, empty encoding */ discoverWindHintView;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
