@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

+ (id)filter;
+ (id)filterWithContactIdentifiers:(id)a0;

- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 birthdayDate:(id)a2 potentialBirthdayDate:(id)a3;
- (unsigned long long)sexHintForGivenName;

@end
