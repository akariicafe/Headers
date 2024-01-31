@class NSString, NSMutableDictionary, NSUUID, NSMutableOrderedSet, NSDictionary, ANTrackPlayer, NSObject;
@protocol OS_os_log, ANPlaybackManagerDelegate, OS_dispatch_queue, ANPlaybackManagerDataSource;

@interface ANPlaybackManager : NSObject <ANTrackPlayerDelegate>

@property (retain, nonatomic) ANTrackPlayer *audioPlayer;
@property (readonly, nonatomic) NSMutableDictionary *playbackInfo;
@property (retain, nonatomic) NSMutableOrderedSet *announcementsToPlay;
@property (nonatomic) long long lastAnnoucementIndex;
@property (readonly, nonatomic) unsigned long long playbackOptions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue;
@property (retain, nonatomic) NSUUID *endpointID;
@property (copy, nonatomic) id /* block */ playbackCompletionHandler;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) NSDictionary *lastPlayedAnnouncementInfo;
@property (readonly) unsigned long long playbackState;
@property (readonly) unsigned long long playbackItemCount;
@property (weak, nonatomic) id<ANPlaybackManagerDelegate> delegate;
@property (weak, nonatomic) id<ANPlaybackManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithEndpointID:(id)a0;

- (void)performPlaybackCommand:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithEndpointID:(id)a0;
- (void)_stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (id)_announcementsForPlaybackOptions:(unsigned long long)a0 fromAnnouncements:(id)a1;
- (void)updatePlaybackForAnnouncementID:(id)a0 options:(unsigned long long)a1;
- (void)_nextAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)_stopAudioPlayer;
- (BOOL)_playAnnouncements:(id)a0 announceIDToStart:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_startPlayingAnnouncements;
- (void)_previousAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)_handlePlaybackEndedForPlayer:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (BOOL)_playAnnouncementsWithIDs:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)trackPlayer:(id)a0 didUpdatePlaybackState:(unsigned long long)a1 announcementID:(id)a2;
- (id)_createTrackPlayerWithAnnouncement:(id)a0 options:(unsigned long long)a1 anchorPoint:(unsigned long long *)a2;
- (void)trackPlayer:(id)a0 didFinishPlayingTrackType:(long long)a1 announcementID:(id)a2 error:(id)a3;
- (id)_nextAnnouncementToPlay;
- (void)_updatePlaybackInfoForAnnouncementID:(id)a0 options:(unsigned long long)a1 player:(id)a2;

@end
