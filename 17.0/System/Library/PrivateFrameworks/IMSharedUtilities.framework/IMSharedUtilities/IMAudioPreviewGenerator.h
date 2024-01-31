@interface IMAudioPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)audioMedataForFileURL:(id)a0 senderContext:(id)a1;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (BOOL)generatesMetadata;
+ (BOOL)generatesPreview;
+ (id)metadataExtension;
+ (BOOL)writesToDisk;

@end
