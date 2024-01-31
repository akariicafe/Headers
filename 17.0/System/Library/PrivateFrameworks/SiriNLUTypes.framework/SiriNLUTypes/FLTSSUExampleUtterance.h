@class NSString, NSMutableDictionary, NSData;

@interface FLTSSUExampleUtterance : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUExampleUtterance { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *string;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUExampleUtterance> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExampleUtterance { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExampleUtterance { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
