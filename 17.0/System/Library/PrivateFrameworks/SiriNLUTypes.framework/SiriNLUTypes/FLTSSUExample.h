@class FLTSSUExampleUtterance, NSMutableDictionary, FLTSSUExampleEncodedVector, NSData, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FLTSSUExample : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUExample { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long data_type;
@property (readonly, nonatomic) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (readonly, nonatomic) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *data;

+ (Class)data_immutableClassForType:(long long)a0;
+ (long long)data_typeForImmutableObject:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<SSUExample> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExample { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUExample { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
