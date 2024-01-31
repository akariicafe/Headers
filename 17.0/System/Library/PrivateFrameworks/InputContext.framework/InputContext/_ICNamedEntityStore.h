@class NSString, _ICTransientLexicon, NSSet, _ICLexiconView, NSMutableOrderedSet;

@interface _ICNamedEntityStore : NSObject {
    NSMutableOrderedSet *_leastRecentlyAddedEntities;
    unsigned long long _maximumRecentlyAddedEntities;
}

@property (retain, nonatomic) _ICTransientLexicon *wordLexiconImpl;
@property (retain, nonatomic) _ICTransientLexicon *phraseLexiconImpl;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) _ICLexiconView *wordLexicon;
@property (readonly, nonatomic) _ICLexiconView *phraseLexicon;
@property (readonly, nonatomic) unsigned long long durableEntitiesAdded;
@property (readonly, nonatomic) unsigned long long recentEntitiesAdded;
@property (nonatomic) unsigned long long minimumWordLength;
@property (nonatomic) BOOL treatHyphenatedWordAsPhrase;
@property (copy, nonatomic) NSSet *acceptedLanguages;

+ (id)tokenize:(id)a0;

- (id)_adjustWordsForHyphenationIfNeeded:(id)a0 didAdjust:(BOOL *)a1;
- (BOOL)isCloserToTitleCase:(id)a0 than:(id)a1;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)entityIsHyphenatedWord:(id)a0;
- (struct USet { } *)_exemplarSetForCustomLocales:(id)a0;
- (BOOL)areStringCharactersWhitelisted:(id)a0;
- (BOOL)isValidNamedEntity:(id)a0 explanation:(id *)a1;
- (struct USet { } *)exemplarSetForSupportedLocales;
- (void)removeAllEntities;
- (void)reloadRecents;
- (id)initWithName:(id)a0 maximumRecentlyAddedEntities:(unsigned long long)a1;
- (void)addEntity:(id)a0 isDurable:(BOOL)a1;

@end
