@class AFBBufferBuilder;

@interface TRIFBMobileAssetReferenceBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct MobileAssetReferenceBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setType:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setAssetName:(id)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)setDownloadSize:(unsigned long long)a0;
- (void)setVersion:(id)a0;
- (void)setFileType:(unsigned char)a0;
- (void)setIsOnDemand:(BOOL)a0;

@end
