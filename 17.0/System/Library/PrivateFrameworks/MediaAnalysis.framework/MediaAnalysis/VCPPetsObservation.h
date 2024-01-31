@class NSArray;

@interface VCPPetsObservation : NSObject

@property (retain, nonatomic) NSArray *keypoints;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) int petsType;
@property (nonatomic) int revision;

- (void).cxx_destruct;

@end
