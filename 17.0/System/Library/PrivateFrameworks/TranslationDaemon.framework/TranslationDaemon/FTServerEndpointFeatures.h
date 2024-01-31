@class NSArray, NSString, NSMutableDictionary, NSData;

@interface FTServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ServerEndpointFeatures { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int processed_audio_duration_ms;
@property (readonly, nonatomic) int num_of_words;
@property (readonly, nonatomic) int trailing_silence_duration;
@property (readonly, nonatomic) double eos_likelihood;
@property (readonly, nonatomic) NSArray *pause_counts;
@property (readonly, nonatomic) double silence_posterior;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) NSString *speech_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ServerEndpointFeatures> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServerEndpointFeatures { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ServerEndpointFeatures { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)pause_counts_count;
- (void)pause_counts_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)pause_counts_objectAtIndex:(unsigned long long)a0;

@end
