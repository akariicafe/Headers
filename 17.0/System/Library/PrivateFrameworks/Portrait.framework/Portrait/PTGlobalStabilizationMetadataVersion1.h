@interface PTGlobalStabilizationMetadataVersion1 : PTGlobalStabilizationMetadata {
    struct { int width; int height; } _originalVideoDimensions;
}

@property (nonatomic) struct { int x0; int x1; } originalVideoDimensions;
@property (readonly) BOOL hasOriginalVideoDimensions;

- (id)initWithData:(id)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;

@end
