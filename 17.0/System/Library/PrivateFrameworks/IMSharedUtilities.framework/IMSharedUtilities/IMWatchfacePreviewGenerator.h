@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (BOOL)_isAvailable;
+ (id)UTITypes;
+ (BOOL)decorateWatchfacePreview:(id)a0 andWriteToURL:(id)a1 imagePxSize:(struct CGSize { double x0; double x1; } *)a2;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (Class)greenfieldUtilitiesClass;
+ (BOOL)writesToDisk;

@end
