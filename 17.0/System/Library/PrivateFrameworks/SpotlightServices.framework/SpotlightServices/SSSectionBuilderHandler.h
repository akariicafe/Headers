@class SPSearchEntity, NSArray, NSSet, SPSearchContactEntity, SPSearchQueryContext;

@interface SSSectionBuilderHandler : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *searchInAppInfo;
@property (retain, nonatomic) NSSet *bundleIdentifiersForHiddenSections;
@property (retain, nonatomic) SPSearchContactEntity *contactEntity;
@property (retain, nonatomic) SPSearchEntity *searchEntity;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;

+ (void)injectRecentsOptionsIntoResult:(id)a0;
+ (id)buildSectionsWithSections:(id)a0 queryContext:(id)a1 searchInAppInfo:(id)a2 renderState:(unsigned long long)a3;
+ (id)findDistinctPathIdentifiersForSections:(id)a0;
+ (BOOL)isZKWAutoShortcutBundle:(id)a0;
+ (BOOL)isZKWRecentBundle:(id)a0;
+ (id)makeClearProactiveCategoryButtonItemWithCategory:(int)a0 shouldClearWholeSection:(BOOL)a1 result:(id)a2;
+ (Class)sectionBuilderClassForSection:(id)a0 withQueryContext:(id)a1;

- (void).cxx_destruct;
- (id)buildSections;
- (void)insertDummySectionsIntoSections:(id)a0;

@end
