@interface HULocationTriggerEditorMapDragRadiusView : UIView <MKMapViewDelegate> {
    void /* unknown type, empty encoding */ normalizedSliderValue;
    void /* unknown type, empty encoding */ radiusInMeters;
    void /* unknown type, empty encoding */ radiusSlider;
    void /* unknown type, empty encoding */ radiusLabel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ mapView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ proximity;

- (void)traitCollectionDidChange:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)dragHandleDidMove:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radiusInMeters:(double)a1 delegate:(id)a2;

@end
