@class UIPointerShape;

@interface UIPointerAccessory : NSObject <NSCopying>

@property (copy, nonatomic) UIPointerShape *shape;
@property (nonatomic) struct { double offset; double angle; } position;
@property (readonly, nonatomic) BOOL _isArrowAccessory;
@property (nonatomic) BOOL orientationMatchesAngle;

+ (id)accessoryWithShape:(id)a0 position:(struct { double x0; double x1; })a1;
+ (id)arrowAccessoryWithPosition:(struct { double x0; double x1; })a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
