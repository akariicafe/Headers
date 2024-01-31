@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader

@property (retain, nonatomic) MAAsset *updateAsset;

- (void)dealloc;
- (BOOL)cancel:(id *)a0;
- (id)initWithUpdateAsset:(id)a0;
- (void)loadUpdateBrainWithMAOptions:(id)a0 clientOptionsFromPolicy:(id)a1 progressHandler:(id /* block */)a2;
- (void)adjustOptions:(id)a0 completion:(id /* block */)a1;
- (void)adjustMAOptions:(id)a0 completion:(id /* block */)a1;
- (void)loadUpdateBrainWithMAOptions:(id)a0 progressHandler:(id /* block */)a1;
- (void)loadUpdateBrainWithOptions:(id)a0 progressHandler:(id /* block */)a1;
- (BOOL)purgeUpdateBrains:(id *)a0;
- (long long)requiredDiskSpace:(id *)a0;

@end
