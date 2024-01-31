@class NSArray, NSMutableDictionary;

@interface STMediaStatusDomainDisplayNameTransformerProvider : NSObject <STStatusDomainClientDataTransformerProviding> {
    NSMutableDictionary *_entityResolversByLocalization;
    NSMutableDictionary *_transformersByLocalization;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)init;
- (void).cxx_destruct;
- (id)dataTransformerForClient:(id)a0;

@end
