@class NSArray, NSMutableDictionary, NSData;

@interface FTMultiUserRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultiUserRecognitionCandidate { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *recognition_candidate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::MultiUserRecognitionCandidate> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserRecognitionCandidate { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserRecognitionCandidate { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)recognition_candidate_count;
- (void)recognition_candidate_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)recognition_candidate_objectAtIndex:(unsigned long long)a0;

@end
