@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKAnnotatedHorizontalLineBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) long long styleIdentifier;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 styleIdentifier:(long long)a2 userInfo:(id)a3;

@end
