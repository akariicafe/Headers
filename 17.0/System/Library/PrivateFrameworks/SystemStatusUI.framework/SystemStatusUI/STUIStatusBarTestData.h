@class NSSet, NSMutableDictionary;

@interface STUIStatusBarTestData : STMutableStatusBarData

@property (copy, nonatomic) NSSet *updatedKeys;
@property (copy, nonatomic) NSSet *enabledKeys;
@property (retain, nonatomic) NSMutableDictionary *testEntries;

+ (id)dependentDataKeyForDisplayItemIdentifier:(id)a0;
+ (id)dependentDataKeyForItemIdentifier:(id)a0;
+ (id)emptyTestData;
+ (id)fullTestData;
+ (id)testDataWithUpdatedKeys:(id)a0 enabledKeys:(id)a1;

- (id)init;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)applyUpdate:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)existingEntryKeys;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)setDataEntry:(id)a0 forKey:(id)a1;

@end
