@class NSArray;

@interface PFMessagesStackLayoutFrameSolver : NSObject

@property (nonatomic) long long stackedItemsCount;
@property (nonatomic) double normalizedVerticalInsets;
@property (nonatomic) double normalizedVerticalOffset;
@property (nonatomic) double normalizedSizeTransform;
@property (nonatomic) double rotationAngle;
@property (copy, nonatomic) NSArray *normalizedHorizontalOffsets;

- (id)init;
- (void).cxx_destruct;
- (void)getGeometries:(struct { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; } *)a0 count:(unsigned long long)a1;

@end
