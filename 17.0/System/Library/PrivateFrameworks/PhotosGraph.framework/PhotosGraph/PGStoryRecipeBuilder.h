@interface PGStoryRecipeBuilder : NSObject

+ (id)_appleSongAssetFromAppleMusicCuration:(id)a0;
+ (id)_keyFlexSongAssetFromFlexMusicCuration:(id)a0;
+ (id)_storyRecipeWithKeyAppleMusicSongAsset:(id)a0 keyFlexSongAsset:(id)a1 isAppleMusicSubscriber:(BOOL)a2 shouldAvoidColorGrading:(BOOL)a3;
+ (id)storyRecipeForMemory:(id)a0 appleMusicCuration:(id)a1 flexMusicCuration:(id)a2 shouldAvoidColorGrading:(BOOL)a3 isAppleMusicSubscriber:(BOOL)a4 error:(id *)a5;

@end
