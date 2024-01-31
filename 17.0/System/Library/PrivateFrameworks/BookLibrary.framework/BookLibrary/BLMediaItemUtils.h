@interface BLMediaItemUtils : NSObject

+ (unsigned long long)bitrateForItem:(id)a0;
+ (void)addPersistHLSOfflinePlaybackKey:(id)a0 forUri:(id)a1 toItem:(id)a2;
+ (void)clearPersistHLSOfflinePlaybackKeysFromItem:(id)a0;
+ (id)hlsOfflinePlaybackKeysForItem:(id)a0;
+ (void)removePersistHLSOfflinePlaybackKeyForUri:(id)a0 fromItem:(id)a1;
+ (void)setBitrate:(unsigned long long)a0 forItem:(id)a1;

@end
