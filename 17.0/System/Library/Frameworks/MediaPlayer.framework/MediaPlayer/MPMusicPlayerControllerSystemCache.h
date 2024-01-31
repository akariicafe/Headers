@class NSUserDefaults, MPMusicPlayerQueueDescriptor, MPMusicPlayerControllerNowPlaying;

@interface MPMusicPlayerControllerSystemCache : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly, nonatomic) MPMusicPlayerControllerSystemCache *sharedCache;

@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (readonly, nonatomic) BOOL hasCachedData;

- (void)clearCache;
- (id)_init;
- (BOOL)_saveObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_objectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
