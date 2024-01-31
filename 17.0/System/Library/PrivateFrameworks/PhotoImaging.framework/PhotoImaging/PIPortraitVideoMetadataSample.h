@class NSString, PTTimedRenderingMetadata;

@interface PIPortraitVideoMetadataSample : NSObject

@property (class, readonly, nonatomic) NSString *renderingMetadataIdentifier;

@property (retain, nonatomic) PTTimedRenderingMetadata *timedMetadata;

- (void).cxx_destruct;
- (id)CIImageProcessorDigestObject;
- (void)applyToRenderRequest:(id)a0;
- (id)initWithMetadataGroup:(id)a0 majorVersion:(unsigned int)a1 minorVersion:(unsigned int)a2 error:(out id *)a3;
- (void)nu_updateDigest:(id)a0;
- (id)valueWithIdentifier:(id)a0 inGroup:(id)a1 ofClass:(Class)a2;

@end
