@class NSArray;

@interface PADAlgorithmFacePoseInput : NSObject

@property (nonatomic) double pitch;
@property (nonatomic) double yaw;
@property (nonatomic) double roll;
@property (nonatomic) double smile;
@property (retain, nonatomic) NSArray *landmarks;
@property (retain, nonatomic) NSArray *faceprint;

- (void).cxx_destruct;

@end
