@class NSArray, NSMutableDictionary, NSData;

@interface FTRecognitionChoice : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionChoice { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *alternative_index;
@property (readonly, nonatomic) int confidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionChoice> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionChoice { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionChoice { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)alternative_index_count;
- (void)alternative_index_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)alternative_index_objectAtIndex:(unsigned long long)a0;

@end
