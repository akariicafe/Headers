@class NSArray, NSDictionary;

@interface VGEarFrameDumpOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *leftEarEnrolledPoses;
@property (retain, nonatomic) NSArray *rightEarEnrolledPoses;
@property (retain, nonatomic) NSDictionary *leftEarEnrolledYawToBoundingBox;
@property (retain, nonatomic) NSDictionary *rightEarEnrolledYawToBoundingBox;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
