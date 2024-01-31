@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (BOOL)_getUncroppedSizeForImageAtURL:(id)a0 scale:(double)a1 withImageSizeInPx:(struct CGSize { double x0; double x1; })a2 maximumSizeInPx:(struct CGSize { double x0; double x1; })a3 minimumSizeInPx:(struct CGSize { double x0; double x1; })a4 previewSize:(struct CGSize { double x0; double x1; } *)a5 senderContext:(id)a6;
+ (struct CGImage { } *)_newBlastdoorPreviewForFileAtURL:(id)a0 senderContext:(id)a1 maxPxWidth:(double)a2 scale:(double)a3 isScreenshot:(BOOL *)a4 isMonoskiAsset:(BOOL *)a5 stickerEffect:(id *)a6 error:(id *)a7;
+ (struct CGImage { } *)_newCroppedAndScaledImageWithImageSource:(struct CGImageSource { } *)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (struct CGImage { } *)newThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 imagePxSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 scale:(double)a3;
+ (BOOL)writesToDisk;

@end
