@class NSArray, NSMutableDictionary, NSData;

@interface FTAcousticFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AcousticFeature { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *acoustic_feature_per_frame;
@property (readonly, nonatomic) float frame_duration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::AcousticFeature> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AcousticFeature { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AcousticFeature { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)acoustic_feature_per_frame_count;
- (void)acoustic_feature_per_frame_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)acoustic_feature_per_frame_objectAtIndex:(unsigned long long)a0;

@end
