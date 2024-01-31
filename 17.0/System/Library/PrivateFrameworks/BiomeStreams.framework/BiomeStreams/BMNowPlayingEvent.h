@class NSString, NSArray;

@interface BMNowPlayingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned int elapsed;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) int itemMediaType;
@property (readonly, nonatomic) int itemMediaSubtype;
@property (readonly, nonatomic) NSString *iTunesStoreIdentifier;
@property (readonly, nonatomic) NSString *iTunesSubscriptionIdentifier;
@property (readonly, nonatomic) NSString *iTunesArtistIdentifier;
@property (readonly, nonatomic) NSString *iTunesAlbumIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) BOOL isAirPlayVideo;
@property (readonly, nonatomic) BOOL isRemoteControl;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)initWithDKEvent:(id)a0 outputDevices:(id)a1;
- (id)initWithDKEvent:(id)a0 outputDevices:(id)a1 iTunesArtistIdentifier:(id)a2 iTunesAlbumIdentifier:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUniqueID:(id)a0 bundleID:(id)a1 absoluteTimestamp:(double)a2 playbackState:(unsigned long long)a3 album:(id)a4 artist:(id)a5 duration:(unsigned int)a6 genre:(id)a7 title:(id)a8 elapsed:(unsigned int)a9 mediaType:(id)a10 iTunesStoreIdentifier:(id)a11 iTunesSubscriptionIdentifier:(id)a12 iTunesArtistIdentifier:(id)a13 iTunesAlbumIdentifier:(id)a14 isAirPlayVideo:(BOOL)a15 outputDevices:(id)a16;
- (id)initWithUniqueID:(id)a0 bundleID:(id)a1 absoluteTimestamp:(double)a2 playbackState:(unsigned long long)a3 album:(id)a4 artist:(id)a5 duration:(unsigned int)a6 genre:(id)a7 title:(id)a8 elapsed:(unsigned int)a9 mediaType:(id)a10 iTunesStoreIdentifier:(id)a11 iTunesSubscriptionIdentifier:(id)a12 isAirPlayVideo:(BOOL)a13 outputDevices:(id)a14;
- (id)initWithUniqueID:(id)a0 bundleID:(id)a1 absoluteTimestamp:(double)a2 playbackState:(unsigned long long)a3 album:(id)a4 artist:(id)a5 duration:(unsigned int)a6 genre:(id)a7 title:(id)a8 elapsed:(unsigned int)a9 mediaType:(id)a10 itemMediaType:(int)a11 itemMediaSubtype:(int)a12 iTunesStoreIdentifier:(id)a13 iTunesSubscriptionIdentifier:(id)a14 iTunesArtistIdentifier:(id)a15 iTunesAlbumIdentifier:(id)a16 groupIdentifier:(id)a17 isAirPlayVideo:(BOOL)a18 isRemoteControl:(BOOL)a19 outputDevices:(id)a20;

@end
