@class NSString, NSMutableDictionary, NSData;

@interface QSSUpdateAudioInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct UpdateAudioInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *product_id;
@property (readonly, nonatomic) NSString *vendor_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::UpdateAudioInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UpdateAudioInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UpdateAudioInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
