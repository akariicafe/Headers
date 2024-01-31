@class NSDictionary, NSString;

@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSDictionary *mappings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withMappings:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHelperMappingType:(id)a0 andLanguage:(id)a1;
- (id)initWithMappings:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToStringMappingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)withHelperMappingType:(id)a0 andLanguage:(id)a1;

@end
