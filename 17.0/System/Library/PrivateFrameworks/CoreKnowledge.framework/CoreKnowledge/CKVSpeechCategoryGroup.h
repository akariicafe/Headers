@class NSSet;

@interface CKVSpeechCategoryGroup : NSObject

@property (readonly, nonatomic) NSSet *itemTypes;
@property (readonly, nonatomic) NSSet *speechCategories;

+ (id)_categoryToFieldTypeMap;
+ (id)groupForFieldTypes:(id)a0;
+ (id)all;
+ (BOOL)_speechCategory:(id)a0 hasFieldTypes:(id)a1;
+ (id)_calculateGroupForItemTypeNumber:(id)a0;
+ (id)groupForItemType:(long long)a0;
+ (id)_itemTypesForSpeechCategory:(id)a0;
+ (id)_categoryToItemTypeCache;
+ (id)groupForSpeechCategories:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqualToSpeechCategoryGroup:(id)a0;
- (id)description;
- (id)speechCategoriesDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemTypes:(id)a0 speechCategories:(id)a1;

@end
