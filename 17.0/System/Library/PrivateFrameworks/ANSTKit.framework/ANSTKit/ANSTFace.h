@class ANSTSkinToneEstimate, ANSTEyeRectEstimate, ANST3DPoseEstimate, ANSTSmileEstimate, ANSTEyeBlinkEstimate;

@interface ANSTFace : ANSTObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL poseEstimateExists;
@property (readonly, nonatomic) BOOL skinToneEstimateExists;
@property (readonly, nonatomic) BOOL smileEstimateExists;
@property (readonly, nonatomic) BOOL eyeBlinkEstimateExists;
@property (readonly, nonatomic) BOOL eyeRectEstimateExists;
@property (readonly, nonatomic, getter=isFrontal) BOOL frontal;
@property (readonly, nonatomic) long long faceMaskConfidence;
@property (readonly, nonatomic) long long eyeCoveringConfidence;
@property (readonly, nonatomic) ANST3DPoseEstimate *poseEstimate;
@property (readonly, nonatomic) ANSTSkinToneEstimate *skinToneEstimate;
@property (readonly, nonatomic) ANSTSmileEstimate *smileEstimate;
@property (readonly, nonatomic) ANSTEyeBlinkEstimate *eyeBlinkEstimate;
@property (readonly, nonatomic) ANSTEyeRectEstimate *eyeRectEstimate;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAcFace:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; struct { float x0; float x1; float x2; float x3; } x13; struct { float x0; float x1; float x2; float x3; } x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned int x20; struct { float x0; float x1; float x2; float x3; } x21; unsigned char x22; unsigned int x23; float x24[64]; unsigned char x25; unsigned int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; unsigned char x38; struct { float x0; float x1; float x2; } x39[98]; int x40; } *)a0;
- (id)debugJSONDictionary;
- (id)initWithAcObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; int x5; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 frontal:(BOOL)a5 faceMaskConfidence:(long long)a6 eyeCoveringConfidence:(long long)a7 poseEstimate:(id)a8 skinToneEstimate:(id)a9 smileEstimate:(id)a10 eyeBlinkEstimate:(id)a11 eyeRectEstimate:(id)a12;

@end
