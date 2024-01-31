@class NSString;

@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator

@property (copy, nonatomic) NSString *mediaKitType;
@property (readonly, nonatomic) id /* block */ payloadTransformBlock;

- (id)initWithRelatedMPModelClass:(Class)a0 mediaKitType:(id)a1 payloadTransformBlock:(id /* block */)a2;
- (id)prepareSource:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
