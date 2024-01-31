@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
