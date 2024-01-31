@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) BOOL allowOnDemand;
@property (nonatomic) BOOL allowUnverifiedIdentity;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
