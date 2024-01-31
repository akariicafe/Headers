@class NSURL, NSString, NSError;

@interface FTMediaAssetManager : NSObject <FTMediaAssetManaging> {
    void /* unknown type, empty encoding */ photoLibraryProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)saveLivePhotoWithPhotoURL:(NSURL *)a0 videoURL:(NSURL *)a1 completion:(void (^)(NSString *, NSError *))a2;
- (void)saveVideoWithURL:(NSURL *)a0 completion:(void (^)(NSString *, NSError *))a1;

@end
