@interface WFTrelloItemContentItem : WFContentItem

+ (id)typeDescription;
+ (BOOL)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (id)preferredFileType;

@end
