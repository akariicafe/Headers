@class NSArray, NSMutableDictionary, NSData;

@interface FTFinishAudio : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct FinishAudio { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int packet_count;
@property (readonly, nonatomic) float total_audio_recorded_seconds;
@property (readonly, nonatomic) NSArray *features_at_endpoint;
@property (readonly, nonatomic) NSArray *server_feature_latency_distribution;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::FinishAudio> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct FinishAudio { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct FinishAudio { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)server_feature_latency_distribution_enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)features_at_endpoint_count;
- (void)features_at_endpoint_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)features_at_endpoint_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)server_feature_latency_distribution_count;
- (id)server_feature_latency_distribution_objectAtIndex:(unsigned long long)a0;

@end
