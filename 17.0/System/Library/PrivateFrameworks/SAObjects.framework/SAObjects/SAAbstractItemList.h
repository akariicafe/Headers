@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject

@property (copy, nonatomic) NSArray *domainObjects;
@property (copy, nonatomic) NSNumber *selectedIndex;

+ (id)abstractItemListWithDictionary:(id)a0 context:(id)a1;
+ (id)abstractItemList;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
