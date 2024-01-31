@class PXImportItemViewModel, PHImportAssetDataRequest;

@interface PXImportThumbnailLoadingRequest : NSObject

@property (readonly, weak, nonatomic) PXImportItemViewModel *importItem;
@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) unsigned long long requestSize;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (retain) PHImportAssetDataRequest *assetDataRequest;

- (void).cxx_destruct;
- (id)initWithImportItem:(id)a0 requestID:(long long)a1 requestSize:(unsigned long long)a2 completionBlock:(id /* block */)a3;

@end
