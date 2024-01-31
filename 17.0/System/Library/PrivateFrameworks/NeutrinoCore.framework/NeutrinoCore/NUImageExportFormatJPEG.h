@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
