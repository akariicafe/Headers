@interface PHSuggestionWallpaperShuffleUtilities : NSObject

+ (id)allPotentialSuggestionLocalIdentifierGroupsForPosterConfiguration:(id)a0 fromSuggestionLocalIdentifiersByFeature:(id)a1 withRejectedPersonLocalIdentifiers:(id)a2;
+ (id)allPotentialSuggestionLocalIdentifiersForPosterConfiguration:(id)a0 fromSuggestionLocalIdentifiersByFeature:(id)a1 withRejectedPersonLocalIdentifiers:(id)a2;
+ (id)chosenSuggestionLocalIdentifiersForPosterConfiguration:(id)a0 fromSuggestionLocalIdentifiersByFeature:(id)a1 atDate:(id)a2 usingStrategy:(unsigned long long)a3 withRejectedPersonLocalIdentifiers:(id)a4;
+ (id)chosenSuggestionLocalIdentifiersFromGroups:(id)a0 atDate:(id)a1;
+ (id)chosenSuggestionLocalIdentifiersIn:(id)a0 atDate:(id)a1;
+ (id)chosenSuggestionsForPosterConfiguration:(id)a0 atDate:(id)a1 inPhotoLibrary:(id)a2;
+ (void)enumerateFeaturesOfPosterConfiguration:(id)a0 withRejectedPersonLocalIdentifiers:(id)a1 usingBlock:(id /* block */)a2;
+ (id)matchingSuggestionInternalPredicateForPosterConfiguration:(id)a0;
+ (id)mediaFromSuggestions:(id)a0 assetBySuggestionUUID:(id *)a1;
+ (void)setFeaturedStateOfSuggestions:(id)a0;
+ (id)suggestionLocalIdentifiersByFeatureForPosterConfiguration:(id)a0 inPhotoLibrary:(id)a1;

@end
