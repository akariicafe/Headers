@class NSArray;

@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isMetadataValid) BOOL metadataValid;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long faceState;
@property (readonly, nonatomic) double frameNumber;
@property (readonly, nonatomic) unsigned long long metadataType;
@property (readonly, nonatomic) NSArray *motionData;

- (void)validateMask;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 faceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16]; } *)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
