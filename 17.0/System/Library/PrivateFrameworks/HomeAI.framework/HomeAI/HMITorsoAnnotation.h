@class NSArray, NSUUID, HMIFaceRecognition;

@interface HMITorsoAnnotation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSArray *torsoprints;
@property (readonly) NSUUID *torsoModelVersion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1 torsoModelVersion:(id)a2;

@end
