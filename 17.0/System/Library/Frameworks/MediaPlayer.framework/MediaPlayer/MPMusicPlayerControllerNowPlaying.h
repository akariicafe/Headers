@class MPNowPlayingInfoAudioFormat, MPMediaItem, NSString;

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPMediaItem *item;
@property (readonly, nonatomic) MPNowPlayingInfoAudioFormat *audioFormat;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) unsigned long long itemUID;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long count;

+ (id)nowPlayingWithItem:(id)a0 itemIdentifier:(id)a1 artworkIdentifier:(id)a2 index:(long long)a3 count:(long long)a4;
+ (id)nowPlayingWithItem:(id)a0 itemIdentifier:(id)a1 itemUID:(unsigned long long)a2 artworkIdentifier:(id)a3 audioFormat:(id)a4 index:(long long)a5 count:(long long)a6;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
