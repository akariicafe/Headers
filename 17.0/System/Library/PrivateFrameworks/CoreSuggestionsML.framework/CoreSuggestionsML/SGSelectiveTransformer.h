@class NSString;
@protocol PMLTransformerProtocol;

@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol>

@property (retain) id<PMLTransformerProtocol> transformer;
@property (retain) NSString *inputKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withTransformer:(id)a0 appliedToInputKey:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)initWithTransformer:(id)a0 appliedToInputKey:(id)a1;
- (BOOL)isEqualToSGSelectiveTransformer:(id)a0;

@end
