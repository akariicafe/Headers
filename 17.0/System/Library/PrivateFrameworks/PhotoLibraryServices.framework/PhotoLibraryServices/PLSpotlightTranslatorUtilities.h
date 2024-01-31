@interface PLSpotlightTranslatorUtilities : NSObject

+ (id)spotlightPersonsFromPLPersons:(id)a0;
+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1;
+ (id)contentRatingFromScenes:(id)a0 algorithmVersion:(short)a1;
+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1 synonymSearchIndexCategoryMask:(unsigned long long)a2 synonyms:(id)a3;
+ (id)spotlightAudioClassificationsFromScenes:(id)a0;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1;
+ (id)spotlightScenesFromDetectionTraits:(id)a0;
+ (id)seasonsForDates:(id)a0 calendar:(id)a1 locale:(id)a2 synonymsBySeason:(id)a3;

@end
