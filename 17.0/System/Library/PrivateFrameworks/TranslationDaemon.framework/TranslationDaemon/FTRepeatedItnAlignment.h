@class NSArray, NSMutableDictionary, NSData;

@interface FTRepeatedItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RepeatedItnAlignment { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *itn_alignment;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RepeatedItnAlignment> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedItnAlignment { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedItnAlignment { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)itn_alignment_count;
- (void)itn_alignment_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)itn_alignment_objectAtIndex:(unsigned long long)a0;

@end
