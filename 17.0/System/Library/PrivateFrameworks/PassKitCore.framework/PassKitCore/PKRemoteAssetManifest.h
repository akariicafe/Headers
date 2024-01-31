@class NSURL, NSMutableDictionary, NSArray;

@interface PKRemoteAssetManifest : NSObject {
    NSURL *_passURL;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSMutableDictionary *remoteAssets;
@property (readonly, nonatomic) NSArray *encryptedDeviceSpecificRemoteAssetFilenames;

+ (Class)_remoteAssestManifestItemClassWithValues:(id)a0;

- (void).cxx_destruct;
- (id)deviceSpecificAsset;
- (id)deviceSpecificAssetForScreenScale:(double)a0 suffix:(id)a1;
- (id)initWithFileURL:(id)a0 passURL:(id)a1 deviceSEIDs:(id)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 passURL:(id)a1 error:(id *)a2;

@end
