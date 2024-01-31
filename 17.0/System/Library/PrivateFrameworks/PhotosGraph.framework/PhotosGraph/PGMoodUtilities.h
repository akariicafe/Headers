@interface PGMoodUtilities : NSObject

+ (id)moodMeaningIdentifiersForAssetCollection:(id)a0 withGraph:(id)a1 moodOptions:(id)a2;
+ (id)_momentNodesForAssetCollection:(id)a0 inGraph:(id)a1 moodOptions:(id)a2;
+ (id)moodGraphContextIdentifiersForAssetCollection:(id)a0 withGraph:(id)a1 moodOptions:(id)a2;
+ (id)moodGraphContextIdentifiersForMomentNodes:(id)a0 inGraph:(id)a1 moodOptions:(id)a2;
+ (id)moodGraphNodeIdentifiersForAssetCollection:(id)a0 withGraph:(id)a1 moodOptions:(id)a2;
+ (id)moodGraphNodeIdentifiersForMomentNodes:(id)a0;
+ (id)moodMeaningIdentifiersForMomentNodes:(id)a0;
+ (id)moodSceneIdentifiersByMomentForAssetCollection:(id)a0 withGraph:(id)a1 moodOptions:(id)a2;
+ (id)moodSceneIdentifiersByMomentForMomentNodes:(id)a0;

@end
