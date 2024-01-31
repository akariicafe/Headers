@class NSString;

@interface DDSMAAutoAssetProvider : NSObject <DDSMAAutoAssetProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autoAssetForAssetSelector:(id)a0 clientID:(id)a1;
- (void)fetchLockReasonCountForAutoAsset:(id)a0 callback:(id /* block */)a1;
- (void)lockAutoAsset:(id)a0 callback:(id /* block */)a1;

@end
