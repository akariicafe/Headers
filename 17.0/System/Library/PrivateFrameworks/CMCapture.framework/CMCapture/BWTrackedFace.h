@interface BWTrackedFace : NSObject {
    float _trackingDistance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _detectionRect;
    float _sizeToDistanceMultiplier;
}

@property (retain, nonatomic) id trackingID;
@property (nonatomic) float trackingDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackingRect;
@property (readonly, nonatomic) id detectionID;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } detectionRect;
@property (readonly, nonatomic) float size;
@property (readonly, nonatomic) float distance;

- (void)dealloc;

@end
