@class NSString, MKImportAnalytics, NSMutableSet;
@protocol MKAssetDecoder;

@interface MKPhotoLibrary : NSObject {
    id<MKAssetDecoder> _decoder;
    MKImportAnalytics *_analytics;
    unsigned long long _importCount;
    NSMutableSet *_importErrors;
}

@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *rootPath;

- (void)close;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentType:(unsigned long long)a0;
- (id)addAsset:(id)a0;
- (void)addAsset:(id)a0 filename:(id)a1 originalFilename:(id)a2 size:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)assetCollection:(id)a0;
- (id)assetCollectionChangeRequest:(id)a0;
- (unsigned long long)assetCount:(id)a0;
- (BOOL)copy:(id)a0 filename:(id)a1 error:(id *)a2;
- (unsigned long long)countForCollection:(id)a0 error:(id *)a1;
- (BOOL)photoLibraryDidComplete:(id)a0 filename:(id)a1 originalFilename:(id)a2 success:(BOOL)a3 error:(id *)a4;
- (void)sendAnalytics;
- (void)setCollection:(id)a0 forLocalIdentifiers:(id)a1;

@end
