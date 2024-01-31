@class NSString, NSDataDetector;

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSDataDetector *dataDetector;
@property (retain) NSString *emailMapping;
@property (retain) NSString *linkMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withEmailMapping:(id)a0 linkMapping:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEmailMapping:(id)a0 linkMapping:(id)a1;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToEntityMappingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
