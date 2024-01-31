@class NSArray, NSString, NSMutableDictionary, NSData;

@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RequestStatsResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *bool_stats;
@property (readonly, nonatomic) NSArray *int32_stats;
@property (readonly, nonatomic) NSArray *double_stats;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *request_locale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RequestStatsResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RequestStatsResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RequestStatsResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)bool_stats_count;
- (void)bool_stats_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)bool_stats_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)double_stats_count;
- (void)double_stats_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)double_stats_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)int32_stats_count;
- (void)int32_stats_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)int32_stats_objectAtIndex:(unsigned long long)a0;

@end
