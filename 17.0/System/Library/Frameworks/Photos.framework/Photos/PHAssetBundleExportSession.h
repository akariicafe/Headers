@class NSString, PHAsset, NSDictionary;

@interface PHAssetBundleExportSession : NSObject

@property (readonly, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSDictionary *fileURLs;
@property (copy, nonatomic) NSString *customFilenameBase;

- (void).cxx_destruct;
- (id)_createAssetBundleFromAsset:(id)a0 withFileURLs:(id)a1 atURL:(id)a2 withError:(id *)a3;
- (id)_filenameBaseForAsset:(id)a0;
- (id)initWithAsset:(id)a0 withAssetExportRequestFileURLs:(id)a1;
- (void)writeToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;

@end
