@class NSArray;

@interface WBSPhishingConfigurationDomain : NSObject

@property (readonly, copy, nonatomic) NSArray *expressions;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)matchesURL:(id)a0;
- (id)initWithExpressions:(id)a0 error:(id *)a1;

@end
