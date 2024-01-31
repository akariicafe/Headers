@class NSMutableDictionary, FTMTAlternativeDescription_MTGenderDescription, NSData, FTMTAlternativeDescription_MTMeaningDescription;

@interface FTMTAlternativeDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MTAlternativeDescription { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long alternative_type;
@property (readonly, nonatomic) FTMTAlternativeDescription_MTGenderDescription *gender_description;
@property (readonly, nonatomic) FTMTAlternativeDescription_MTMeaningDescription *meaning_description;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::MTAlternativeDescription> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MTAlternativeDescription { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MTAlternativeDescription { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
