@class NSString, NSDictionary;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol> {
    BOOL _forNameDetector;
    NSDictionary *_nameMappings;
    NSString *_tokenToIgnore;
    int _minimumConfidence;
    id /* block */ _confidenceMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForNameDetector;
+ (id)withFullNameMapping:(id)a0 firstNameMapping:(id)a1 lastNameMapping:(id)a2 andPossessive:(id)a3;
+ (id)withFullNameMapping:(id)a0 firstNameMapping:(id)a1 lastNameMapping:(id)a2 minimumConfidence:(int)a3 confidenceMapper:(id /* block */)a4 tokenToIgnore:(id)a5 andPossessive:(id)a6;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNameMappings:(id)a0 minimumConfidence:(int)a1 confidenceMapper:(id /* block */)a2 tokenToIgnore:(id)a3 forNameDetector:(BOOL)a4;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToNameMappingTransformer:(id)a0;
- (BOOL)isPossessive:(id)a0;
- (id)nameMappingForToken:(id)a0 withConfidence:(int *)a1;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
