@class NSString;

@interface SXCornersComponentMask : SXComponentMask

@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } radius;
@property (readonly, nonatomic) BOOL topLeft;
@property (readonly, nonatomic) BOOL topRight;
@property (readonly, nonatomic) BOOL bottomRight;
@property (readonly, nonatomic) BOOL bottomLeft;
@property (readonly, nonatomic) unsigned long long cornerMask;
@property (readonly, nonatomic) NSString *curve;

- (BOOL)bottomLeftWithValue:(id)a0 withType:(int)a1;
- (BOOL)bottomRightWithValue:(id)a0 withType:(int)a1;
- (BOOL)cornerWithValue:(id)a0 withType:(int)a1;
- (id)curveWithValue:(id)a0 withType:(int)a1;
- (BOOL)topLeftWithValue:(id)a0 withType:(int)a1;
- (BOOL)topRightWithValue:(id)a0 withType:(int)a1;

@end
