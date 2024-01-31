@class NSData, NSMutableDictionary;

@interface QSSTTSRequestFeatureFlags : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSRequestFeatureFlags { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) BOOL fe_feature;
@property (readonly, nonatomic) BOOL fe_feature_only;
@property (readonly, nonatomic) BOOL disable_prompts;
@property (readonly, nonatomic) BOOL cache_only;
@property (readonly, nonatomic) long long phoneset_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TTSRequestFeatureFlags> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSRequestFeatureFlags { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSRequestFeatureFlags { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
