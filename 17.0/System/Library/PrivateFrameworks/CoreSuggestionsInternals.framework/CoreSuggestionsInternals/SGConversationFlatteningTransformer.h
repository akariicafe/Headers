@class NSString, NSObject;
@protocol PMLTransformerProtocol;

@interface SGConversationFlatteningTransformer : NSObject <PMLTransformerProtocol> {
    NSObject<PMLTransformerProtocol> *_perMessageTranformer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withPerMessageTransformer:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerMessageTransformer:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToConversationFlatteningTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
