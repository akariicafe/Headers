@class NSString;

@interface PTGlobalRenderingMetadata : NSObject <PTSerializable>

@property (readonly, nonatomic) unsigned int majorVersion;
@property (readonly, nonatomic) unsigned int minorVersion;
@property (nonatomic) unsigned int renderingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectFromData:(id)a0;

- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderRequest:(id)a0;
- (void)applyToRenderState:(id)a0;
- (BOOL)matchesRenderState:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })cameraIntrinsic;
- (BOOL)applyToRenderState:(id)a0 error:(id *)a1;
- (id)initWithMajorVersion:(unsigned int)a0 minorVersion:(unsigned int)a1;

@end
