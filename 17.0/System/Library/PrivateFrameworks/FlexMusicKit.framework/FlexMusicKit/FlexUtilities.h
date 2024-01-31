@interface FlexUtilities : NSObject

+ (id)_decodeItem:(id)a0 asClass:(Class)a1;
+ (id)_songFormatForBundleAtPath:(id)a0;
+ (id)backendForSongBundleURL:(id)a0;
+ (id)decodeItemsInArray:(id)a0 asClass:(Class)a1;
+ (id)decodeItemsInDict:(id)a0 asClass:(Class)a1;
+ (id)encodeItemsInArray:(id)a0;
+ (id)encodeItemsInDict:(id)a0;
+ (id)pathToBundledResourceWithName:(id)a0;
+ (id)songsFoundInDeepScanOfDirectory:(id)a0;

@end
