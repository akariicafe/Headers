@class NSDictionary, NSMutableDictionary, PHASEEngine;

@interface PHASEAssetRegistry : NSObject <MetaParameterValueProtocol> {
    PHASEEngine *_engine;
    struct unordered_map<unsigned long long, PHASEAsset *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PHASEAsset *>>> { struct __hash_table<std::__hash_value_type<unsigned long long, PHASEAsset *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, PHASEAsset *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PHASEAsset *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PHASEAsset *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _assetLookup;
    struct unordered_map<unsigned long long, std::unique_ptr<Phase::StringPool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unique_ptr<Phase::StringPool>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<Phase::StringPool>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _stringPools;
}

@property (retain, nonatomic) NSMutableDictionary *metaParameterDictionary;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, copy) NSDictionary *globalMetaParameters;

+ (id)new;

- (void)removeAll;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (id)getUniqueIdentifier;
- (id)assetForIdentifier:(id)a0;
- (id)getAssetForUID:(id)a0;
- (const char *)getStringEmpty:(unsigned long long)a0;
- (void)logRemoveAsset:(id)a0;
- (BOOL)addAssetInternal:(id)a0 assetId:(unsigned long long)a1 outError:(id *)a2;
- (BOOL)addAssetInternal:(id)a0 assetId:(unsigned long long)a1 stringPoolBuilder:(void *)a2 outError:(id *)a3;
- (id)assetInfoString:(long long)a0;
- (const void *)getActionTree:(unsigned long long)a0;
- (const void *)getChannelMapping:(unsigned long long)a0;
- (id)getGlobalMetaParameter:(unsigned long long)a0;
- (id)getMixerInformationForActionTreeWithUID:(id)a0;
- (const struct SoundAssetInfo { void /* function */ **x0; long long x1; unsigned long long x2; long long x3; int x4; unsigned int x5; double x6; } *)getSoundAssetInfo:(unsigned long long)a0;
- (const char *)getString:(unsigned long long)a0;
- (id)globalMetaParameters;
- (void)logAddAsset:(id)a0;
- (id)makeMetaParameterFromDefinition:(id)a0;
- (id)makeSoundAssetWithURL:(id)a0 uid:(id)a1 assetType:(long long)a2 channelLayout:(id)a3 normalizationMode:(long long)a4 targetLKFS:(double)a5 ownerTask:(unsigned int)a6 outError:(id *)a7;
- (id)mixerInformationForActionTreeWithIdentifier:(id)a0;
- (id)registerActionTreeWithRootNode:(id)a0 uid:(id)a1 outError:(id *)a2;
- (id)registerGlobalMetaParameter:(id)a0 error:(id *)a1;
- (id)registerJSONDataBundleWithURL:(id)a0 assetBaseURL:(id)a1 identifier:(id)a2 error:(id *)a3;
- (id)registerJSONDataBundleWithURL:(id)a0 assetBaseURL:(id)a1 uid:(id)a2 outError:(id *)a3;
- (id)registerSoundAssetAtURL:(id)a0 identifier:(id)a1 assetType:(long long)a2 channelLayout:(id)a3 normalizationMode:(long long)a4 error:(id *)a5;
- (id)registerSoundAssetAtURL:(id)a0 identifier:(id)a1 assetType:(long long)a2 channelLayout:(id)a3 normalizationMode:(long long)a4 ownerTask:(unsigned int)a5 error:(id *)a6;
- (id)registerSoundAssetAtURL:(id)a0 identifier:(id)a1 assetType:(long long)a2 channelLayout:(id)a3 normalizationMode:(long long)a4 targetLKFS:(id)a5 ownerTask:(unsigned int)a6 error:(id *)a7;
- (id)registerSoundAssetWithAudioFileData:(id)a0 identifier:(id)a1 assetType:(long long)a2 fileTypeHint:(unsigned int)a3 channelLayout:(id)a4 error:(id *)a5;
- (id)registerSoundAssetWithAudioFileData:(id)a0 identifier:(id)a1 assetType:(long long)a2 fileTypeHint:(unsigned int)a3 channelLayout:(id)a4 normalizationMode:(long long)a5 error:(id *)a6;
- (id)registerSoundAssetWithAudioFileData:(id)a0 identifier:(id)a1 assetType:(long long)a2 fileTypeHint:(unsigned int)a3 channelLayout:(id)a4 normalizationMode:(long long)a5 ownerTask:(unsigned int)a6 error:(id *)a7;
- (id)registerSoundAssetWithAudioFileData:(id)a0 identifier:(id)a1 assetType:(long long)a2 fileTypeHint:(unsigned int)a3 channelLayout:(id)a4 normalizationMode:(long long)a5 targetLKFS:(id)a6 ownerTask:(unsigned int)a7 error:(id *)a8;
- (id)registerSoundAssetWithAudioFileData:(id)a0 uid:(id)a1 assetType:(long long)a2 fileTypeHint:(unsigned int)a3 channelLayout:(id)a4 referenceGainDBSPL:(double)a5 outError:(id *)a6;
- (id)registerSoundAssetWithData:(id)a0 identifier:(id)a1 format:(id)a2 normalizationMode:(long long)a3 error:(id *)a4;
- (id)registerSoundAssetWithData:(id)a0 identifier:(id)a1 format:(id)a2 normalizationMode:(long long)a3 ownerTask:(unsigned int)a4 error:(id *)a5;
- (id)registerSoundAssetWithData:(id)a0 identifier:(id)a1 format:(id)a2 normalizationMode:(long long)a3 targetLKFS:(id)a4 ownerTask:(unsigned int)a5 error:(id *)a6;
- (id)registerSoundAssetWithData:(id)a0 uid:(id)a1 format:(id)a2 referenceGainDBSPL:(double)a3 outError:(id *)a4;
- (id)registerSoundAssetWithURL:(id)a0 uid:(id)a1 assetType:(long long)a2 channelLayout:(id)a3 referenceGainDBSPL:(double)a4 outError:(id *)a5;
- (id)registerSoundEventAssetWithRootNode:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)registerSoundEventAssetWithRootNode:(id)a0 uid:(id)a1 error:(id *)a2;
- (BOOL)removeAssetInternal:(id)a0;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (void)unregisterAssetWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)unregisterAssetWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)unregisterAssetWithUID:(id)a0;
- (void)unregisterAssetWithUID:(id)a0 completionHandler:(id /* block */)a1;

@end
