@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying>

@property (readonly, copy, nonatomic) NSArray *metadataKeys;
@property (readonly, nonatomic) short mappingOption;

- (void)dealloc;
- (id)initWithMetadataRequirement:(id)a0;
- (id)initWithMetadataKeys:(id)a0;
- (id)description;
- (id)initWithMetadataKeys:(id)a0 mappingOption:(short)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
