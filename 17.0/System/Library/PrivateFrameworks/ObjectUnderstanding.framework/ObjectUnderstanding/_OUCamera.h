@interface _OUCamera : NSObject <OUCamera>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

- (id)initWithDictionary:(id)a0;
- (id)initWithIntrinsic:(struct float3x3 { void /* unknown type, empty encoding */ x0[3]; })a0 transform:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
