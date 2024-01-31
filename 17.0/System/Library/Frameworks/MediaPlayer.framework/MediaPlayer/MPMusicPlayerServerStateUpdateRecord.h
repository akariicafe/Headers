@class MPMusicPlayerControllerNowPlayingTimeSnapshot, NSArray, MPMusicPlayerQueueDescriptor, MPMusicPlayerControllerNowPlaying;

@interface MPMusicPlayerServerStateUpdateRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasQueueDescriptor;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic) BOOL hasNowPlaying;
@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (nonatomic) BOOL hasTimeSnapshot;
@property (retain, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *timeSnapshot;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) BOOL hasContentItemIDs;
@property (copy, nonatomic) NSArray *contentItemIDs;
@property (nonatomic) BOOL queueDidChange;
@property (nonatomic) BOOL itemDidEnd;
@property (nonatomic) BOOL queueDidEnd;
@property (nonatomic) BOOL audioFormatDidChange;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
