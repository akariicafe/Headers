@class UIColor, UIImage;

@interface _MKMarkerStyle : NSObject

@property (readonly, nonatomic) UIColor *markerColor;
@property (readonly, nonatomic) double shadowAlpha;
@property (readonly, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) UIColor *glyphColor;
@property (readonly, nonatomic) UIImage *glyphImage;

+ (id)markerStyleForTraitCollection:(id)a0 state:(long long)a1 styleAttributes:(id)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3;

- (void).cxx_destruct;

@end
