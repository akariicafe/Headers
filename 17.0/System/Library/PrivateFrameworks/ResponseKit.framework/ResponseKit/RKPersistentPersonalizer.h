@class NSString, NSMutableDictionary, NSURL, NSLocale, NSDate;
@protocol RKDisplayStringsProvider;

@interface RKPersistentPersonalizer : NSObject {
    void *_model;
    id<RKDisplayStringsProvider> _displayStringsProvider;
}

@property (copy, nonatomic) NSString *languageID;
@property (copy, nonatomic) NSLocale *languageLocale;
@property (copy, nonatomic) NSURL *dynamicDataURL;
@property (readonly) void *model;
@property (weak, nonatomic) NSDate *lastObservedDynamicDataCreationDate;
@property (weak, nonatomic) NSDate *lastDynamicDataCreationCheckDate;
@property (copy, nonatomic) NSMutableDictionary *synonyms;

+ (id)nonEmptyStringsPredicate;
+ (void)removeAllDynamicModelsInDirectory:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)flushDynamicData;
- (void *)createLanguageModel;
- (id)dynamicDataCreationDate;
- (id)headwordsForSynonym:(id)a0;
- (id)headwordsForSynonymPrefix:(id)a0;
- (id)initWithLanguageIdentifier:(id)a0 andDynamicDataURL:(id)a1 displayStringsProvider:(id)a2;
- (void)initializeDynamicLanguageModel;
- (id)topSynonymsForSpeechAct:(id)a0 headword:(id)a1 recipientContext:(id)a2 maxCount:(unsigned long long)a3;
- (void)trainSynonymForSpeechAct:(id)a0 headword:(id)a1 userResponse:(id)a2 recipientContext:(id)a3 weight:(unsigned long long)a4 effectiveDate:(id)a5;

@end
