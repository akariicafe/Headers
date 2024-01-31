@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)functionWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;

@end
