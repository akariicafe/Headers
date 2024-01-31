@interface NUImageExportFormat : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL supportsHDR;

+ (id)defaultFormatForURL:(id)a0;

- (id)pixelFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
