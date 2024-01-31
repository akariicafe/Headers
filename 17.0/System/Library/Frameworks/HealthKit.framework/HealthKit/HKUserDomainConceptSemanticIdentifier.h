@class NSString, HKUserDomainConceptTypeIdentifier;

@interface HKUserDomainConceptSemanticIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)semanticIdentifierWithComponents:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithTypeIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
