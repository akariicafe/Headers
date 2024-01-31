@class NSString, NSMutableDictionary, NSData;

@interface QSSQSSVersionInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct QSSVersionInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *qss_version_server;
@property (readonly, nonatomic) NSString *qss_version_brane;
@property (readonly, nonatomic) NSString *qss_version_serverkit;
@property (readonly, nonatomic) NSString *qss_version_siritts;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::QSSVersionInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct QSSVersionInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct QSSVersionInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
