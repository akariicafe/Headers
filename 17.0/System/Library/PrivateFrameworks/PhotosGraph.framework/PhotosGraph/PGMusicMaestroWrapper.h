@interface PGMusicMaestroWrapper : NSObject

+ (id)curateMusicForNormalizedKeywordsByAssetCollectionLocalIdentifier:(id)a0 keywordsDataFrame:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)curateMusicForNormalizedSupportedKeywordsByAssetCollectionLocalIdentifier:(id)a0 keywordsDataFrame:(id)a1 progressReporter:(id)a2 error:(id *)a3;

- (id)init;

@end
