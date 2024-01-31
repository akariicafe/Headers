@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (copy, nonatomic) NSArray *commands;

+ (id)actionableMapItemWithDictionary:(id)a0 context:(id)a1;
+ (id)actionableMapItem;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
