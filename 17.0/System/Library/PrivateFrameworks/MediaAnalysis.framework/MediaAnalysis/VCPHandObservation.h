@class NSArray;

@interface VCPHandObservation : NSObject

@property (retain, nonatomic) NSArray *keypoints;
@property (nonatomic) int chirality;
@property (nonatomic) int handID;
@property (nonatomic) int groupID;
@property (nonatomic) int revision;
@property (nonatomic) int gestureType;
@property (nonatomic) float gestureConfidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) unsigned long long mitigationType;
@property (nonatomic) unsigned long long fingerOpenness;

+ (id)twoHandGestureTypes;

- (id)init;
- (void).cxx_destruct;

@end
