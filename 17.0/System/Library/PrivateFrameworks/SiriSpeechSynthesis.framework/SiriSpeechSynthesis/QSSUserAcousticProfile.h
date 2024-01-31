@class NSString, NSData, NSMutableDictionary;

@interface QSSUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct UserAcousticProfile { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *acoustic_profile_version;
@property (readonly, nonatomic) NSData *acoustic_profile_blob;
@property (readonly, nonatomic) NSString *profile_checksum;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::UserAcousticProfile> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UserAcousticProfile { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct UserAcousticProfile { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)acoustic_profile_blob:(id /* block */)a0;

@end
