@class PHPhotoLibrary, NSError;

@interface PGGraphRebuilderCompatibility : NSObject

+ (void)fullRebuildWithPhotoLibrary:(PHPhotoLibrary *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
+ (void)incrementalRebuildWithPhotoLibrary:(PHPhotoLibrary *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

- (id)init;

@end
