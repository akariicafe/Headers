@class NSString, NSData;

@interface VCPInMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate> {
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetWithData:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void).cxx_destruct;

@end
