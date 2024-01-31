@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (int)depth;
- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
