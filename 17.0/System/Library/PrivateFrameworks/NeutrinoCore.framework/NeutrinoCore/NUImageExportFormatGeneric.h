@class NSString, NUPixelFormat, NSDictionary;

@interface NUImageExportFormatGeneric : NUImageExportFormat

@property (copy) NSString *fileType;
@property (retain) NUPixelFormat *pixelFormat;
@property (copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileType:(id)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
