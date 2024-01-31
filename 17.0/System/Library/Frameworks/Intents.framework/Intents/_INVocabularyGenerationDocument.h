@class NSString, NSArray, NSMutableDictionary;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying> {
    NSMutableDictionary *_itemsBySiriIDCache;
    NSMutableDictionary *_itemsByStringCache;
}

@property (nonatomic) BOOL haveAssignedAllSiriIDs;
@property (nonatomic) BOOL resetOnNextSync;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *intentSlot;
@property (copy, nonatomic) NSString *validity;
@property (copy, nonatomic) NSString *thisGeneration;
@property (copy, nonatomic) NSArray *vocabularyItems;

- (id)_stringForSelector:(SEL)a0 from:(id)a1;
- (id)_dictionaryRepresentation;
- (void)_takeValuesFromDictionary:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)a0;
- (id)_vocabularyItemWithString:(id)a0;
- (id)diffFromPreviousDocument:(id)a0;
- (id)_everyVocabularyItemSiriID;
- (id)description;
- (void).cxx_destruct;
- (id)_itemsBySiriID;
- (void)_addValueForSelector:(SEL)a0 toDictionary:(id)a1;
- (void)_clearVocabularyItemCaches;
- (id)_valueForSelector:(SEL)a0 ofClass:(Class)a1 from:(id)a2;
- (id)_initWithDictionary:(id)a0;
- (id)writeToFile:(id)a0 createIntermediateDirectories:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_vocabularyItemForSiriID:(id)a0;

@end
