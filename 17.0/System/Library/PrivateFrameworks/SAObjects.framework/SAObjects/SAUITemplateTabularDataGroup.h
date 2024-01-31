@class NSArray;

@interface SAUITemplateTabularDataGroup : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *items;

+ (id)tabularDataGroup;
+ (id)tabularDataGroupWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
