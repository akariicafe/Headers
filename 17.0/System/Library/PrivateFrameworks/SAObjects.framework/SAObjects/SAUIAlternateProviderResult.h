@class NSArray, NSString, NSNumber, SAUIImageResource;

@interface SAUIAlternateProviderResult : SADomainObject

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (retain, nonatomic) SAUIImageResource *providerImage;
@property (copy, nonatomic) NSString *providerName;

+ (id)alternateProviderResultWithDictionary:(id)a0 context:(id)a1;
+ (id)alternateProviderResult;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
