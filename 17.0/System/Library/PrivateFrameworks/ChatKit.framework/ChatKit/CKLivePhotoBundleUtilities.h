@interface CKLivePhotoBundleUtilities : NSObject

+ (BOOL)fileExistsAtPath:(id)a0;
+ (id)attachmentPreviewFileURL:(id)a0 extension:(id)a1;
+ (id)calculateLivePhotoVideoPath:(id)a0;
+ (id)getLivePhotoBundleURL:(id)a0;
+ (BOOL)isLivePhotoAtURL:(id)a0;
+ (BOOL)writeToBundle:(id)a0 atURL:(id)a1;

@end
