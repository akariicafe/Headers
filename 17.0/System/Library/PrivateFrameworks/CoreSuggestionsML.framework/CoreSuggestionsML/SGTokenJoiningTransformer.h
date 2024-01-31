@class NSString;

@interface SGTokenJoiningTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSString *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withSeparator:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)initWithSeparator:(id)a0;
- (BOOL)isEqualToSGTokenJoiningTransformer:(id)a0;

@end
