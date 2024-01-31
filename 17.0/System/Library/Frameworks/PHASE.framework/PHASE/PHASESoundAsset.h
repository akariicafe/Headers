@class NSURL, NSData, NSString;

@interface PHASESoundAsset : PHASEAsset {
    struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct SoundAssetInfo *__value_; } __ptr_; } _soundAssetInfo;
    NSString *_owningDataBundleIdentifer;
}

@property (readonly) long long normalizationMode;
@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property (readonly) long long type;

+ (id)new;

- (id)init;
- (id).cxx_construct;
- (unsigned long long)sizeInBytes;
- (void).cxx_destruct;
- (struct SoundAssetInfo { void /* function */ **x0; long long x1; unsigned long long x2; long long x3; int x4; unsigned int x5; double x6; } *)getAssetInfo;
- (id)initWithData:(id)a0 uid:(id)a1 normalizationMode:(long long)a2 soundAssetInfo:(struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct SoundAssetInfo *x0; } x0; })a3 assetRegistry:(id)a4;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (id)initWithURL:(id)a0 uid:(id)a1 assetType:(long long)a2 normalizationMode:(long long)a3 soundAssetInfo:(struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct SoundAssetInfo *x0; } x0; })a4 assetRegistry:(id)a5;

@end
