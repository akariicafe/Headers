@class NSString;

@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSString *targetMapping;
@property (retain) NSString *phoneMapping;
@property (retain) NSString *emailMapping;
@property (retain) NSString *addressMapping;
@property (retain) NSString *dateMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withTargetMapping:(id)a0 phoneMapping:(id)a1 emailMapping:(id)a2 addressMapping:(id)a3 andDateMapping:(id)a4;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)extendMatchArray:(id)a0 withTarget:(id)a1;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initWithTargetMapping:(id)a0 phoneMapping:(id)a1 emailMapping:(id)a2 addressMapping:(id)a3 andDateMapping:(id)a4;
- (BOOL)isEqualToEntityMatchingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
