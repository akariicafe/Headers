@interface PTGlobalRenderingMetadataVersion2 : PTGlobalRenderingMetadata {
    unsigned int _renderingVersion;
    BOOL _readSuccessAll;
}

@property (nonatomic) unsigned int hwModelID;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int sourceColorBitDepth;

- (unsigned int)renderingVersion;
- (id)initWithData:(id)a0;
- (void)setRenderingVersion:(unsigned int)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderRequest:(id)a0;
- (void)applyToRenderState:(id)a0;
- (BOOL)matchesRenderState:(id)a0;
- (BOOL)applyToRenderState:(id)a0 error:(id *)a1;

@end
