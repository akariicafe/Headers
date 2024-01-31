@class NLTagger, NSArray, NSMutableDictionary, NSSet;
@protocol PFSceneTaxonomy_Staging106165582;

@interface TISceneTaxonomyGenerator : NSObject {
    NSSet *_phraseSet;
    NSSet *_taxonomyIdentifiers;
    NSSet *_taxonomyIdentifiersAllowListSynonymExclusions;
    id<PFSceneTaxonomy_Staging106165582> _sceneTaxonomy;
    NLTagger *_tagger;
}

@property (retain, nonatomic) NSArray *notSupportingInputModes;
@property (readonly, nonatomic) NSMutableDictionary *matchingPhrasesToID;

- (id)init;
- (void).cxx_destruct;
- (id)generateTokens:(id)a0;
- (void)createPhrases;
- (void)createTaxonomyIdentifiers;
- (id)extractTokensForStickerComputation:(id)a0;
- (id)generateQueries:(id)a0;
- (id)generateSearchableQueries:(id)a0;
- (id)generateSearchableQueriesForText:(id)a0;
- (id)generateTokensFromInputString:(id)a0;
- (void)getTagger;

@end
