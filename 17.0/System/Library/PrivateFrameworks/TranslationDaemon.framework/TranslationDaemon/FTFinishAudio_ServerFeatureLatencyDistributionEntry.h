@class NSString, NSMutableDictionary, NSData;

@interface FTFinishAudio_ServerFeatureLatencyDistributionEntry : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ServerFeatureLatencyDistributionEntry { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) float value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::FinishAudio_::ServerFeatureLatencyDistributionEntry> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServerFeatureLatencyDistributionEntry { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServerFeatureLatencyDistributionEntry { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
