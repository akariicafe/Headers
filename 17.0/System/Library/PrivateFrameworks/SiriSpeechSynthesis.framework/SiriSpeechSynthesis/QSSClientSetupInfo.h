@class NSString, NSMutableDictionary, NSData;

@interface QSSClientSetupInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ClientSetupInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float endpoint_threshold;
@property (readonly, nonatomic) BOOL endpoint_extra_delay;
@property (readonly, nonatomic) NSString *speech_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ClientSetupInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ClientSetupInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ClientSetupInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
