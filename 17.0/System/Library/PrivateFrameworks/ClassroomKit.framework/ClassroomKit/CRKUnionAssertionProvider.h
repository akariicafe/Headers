@class NSArray;

@interface CRKUnionAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, copy, nonatomic) NSArray *assertionProviders;

+ (id)activeIDSClassSessionAssertionProviderWithPrefix:(id)a0;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)initWithAssertionProviders:(id)a0;

@end
