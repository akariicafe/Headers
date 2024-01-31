@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (id)UTITypes;
+ (id)_avAssetForURL:(id)a0;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)a0 senderContext:(id)a1 balloonBundleID:(id)a2 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a3 outSize:(struct CGSize { double x0; double x1; } *)a4 error:(id *)a5;
+ (BOOL)isAutoloopAsset:(id)a0;
+ (struct CGImage { } *)newImageWithPlayButtonOverlay:(struct CGImage { } *)a0 scale:(double)a1 transferGUID:(id)a2 error:(id *)a3;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (BOOL)writesToDisk;

@end
