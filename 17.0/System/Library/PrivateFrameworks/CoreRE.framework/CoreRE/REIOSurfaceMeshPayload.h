@class NSArray, IOSurface, RESerializedPayload;

@interface REIOSurfaceMeshPayload : RESharedResourcePayload <REMeshPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IOSurface *ioSurface;
@property (readonly, nonatomic) NSArray *parts;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSArray *instances;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (copy, nonatomic) id /* block */ serializedDataBlock;
@property (retain, nonatomic) RESerializedPayload *serializedData;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)bufferWithDevice:(id)a0;
- (BOOL)hasSameUnderlyingIOSurface:(id)a0;
- (id)initWithIOSurface:(id)a0 parts:(id)a1 models:(id)a2 instances:(id)a3;

@end
