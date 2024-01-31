@class NSString;

@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol>

@property (retain, nonatomic) NSString *targetString;
@property (nonatomic) unsigned long long maxDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)debugAppendText:(id)a0;
+ (void)debugSetContext:(id)a0;
+ (void)debugStoreContext;
+ (id)transformArray:(id)a0 withTargetIndex:(unsigned long long)a1 maximumDistance:(unsigned long long)a2;
+ (id)withTarget:(id)a0 maxDistance:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initWithTarget:(id)a0 maxDistance:(unsigned long long)a1;
- (BOOL)isEqualToTokenDistanceMappingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
