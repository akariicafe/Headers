@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTCorrectionsValidatorResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CorrectionsValidatorResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSArray *corrections;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::CorrectionsValidatorResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CorrectionsValidatorResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CorrectionsValidatorResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)corrections_count;
- (void)corrections_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)corrections_objectAtIndex:(unsigned long long)a0;

@end
