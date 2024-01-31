@class PHImportCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PHImportCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (BOOL)isCanceled;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
