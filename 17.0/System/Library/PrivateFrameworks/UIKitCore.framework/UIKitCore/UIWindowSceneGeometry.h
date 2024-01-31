@interface UIWindowSceneGeometry : NSObject <NSCopying>

@property (nonatomic, setter=_setSystemFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } systemFrame;
@property (nonatomic, setter=_setInterfaceOrientation:) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) long long resizingRestrictions;

+ (id)_calculateEffectiveGeometryForWindowScene:(id)a0;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
