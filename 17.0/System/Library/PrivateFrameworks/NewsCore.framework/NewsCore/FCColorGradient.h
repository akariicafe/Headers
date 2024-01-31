@class NSArray;

@interface FCColorGradient : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *locations;

+ (id)colorGradientWithColors:(id)a0 locations:(id)a1;
+ (id)blackGradient;
+ (id)whiteGradient;
+ (id)colorGradientWithConfigDict:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isSimilarToColorGradient:(id)a0 withinPercentage:(double)a1;
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 colors:(id)a2 locations:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
