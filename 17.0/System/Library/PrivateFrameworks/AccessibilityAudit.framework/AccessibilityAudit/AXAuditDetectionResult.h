@interface AXAuditDetectionResult : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detectionRegion;
@property (nonatomic) long long detectionType;

@end
