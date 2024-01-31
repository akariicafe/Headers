@class NSArray;

@interface REMeshBlendShapeModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long blendShapeIndexType;
@property (readonly, nonatomic) NSArray *perMeshPartBlendShapeBufferIndex;
@property (readonly, nonatomic) NSArray *blendShapeBuffers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBlendShapeIndexType:(unsigned long long)a0 blendShapeBuffers:(id)a1 perMeshPartBlendShapeBufferIndex:(id)a2;
- (id)initWithMeshBlendShapeData:(const void *)a0 meshPartCount:(unsigned long long)a1 payloadBuilder:(void *)a2 deformationModelData:(void *)a3;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 partCount:(unsigned long long)a1 error:(id *)a2;

@end
