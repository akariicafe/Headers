@class NSString, NSMutableArray;

@interface BMPBNowPlayingEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char elapsed : 1; unsigned char itemMediaSubtype : 1; unsigned char itemMediaType : 1; unsigned char playbackState : 1; unsigned char isAirPlayVideo : 1; unsigned char isRemoteControl : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) int playbackState;
@property (readonly, nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (readonly, nonatomic) BOOL hasGenre;
@property (retain, nonatomic) NSString *genre;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasElapsed;
@property (nonatomic) unsigned int elapsed;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) BOOL hasITunesStoreIdentifier;
@property (retain, nonatomic) NSString *iTunesStoreIdentifier;
@property (readonly, nonatomic) BOOL hasITunesSubscriptionIdentifier;
@property (retain, nonatomic) NSString *iTunesSubscriptionIdentifier;
@property (nonatomic) BOOL hasIsAirPlayVideo;
@property (nonatomic) BOOL isAirPlayVideo;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasITunesArtistIdentifier;
@property (retain, nonatomic) NSString *iTunesArtistIdentifier;
@property (readonly, nonatomic) BOOL hasITunesAlbumIdentifier;
@property (retain, nonatomic) NSString *iTunesAlbumIdentifier;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL hasIsRemoteControl;
@property (nonatomic) BOOL isRemoteControl;
@property (nonatomic) BOOL hasItemMediaType;
@property (nonatomic) int itemMediaType;
@property (nonatomic) BOOL hasItemMediaSubtype;
@property (nonatomic) int itemMediaSubtype;

+ (Class)outputDevicesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addOutputDevices:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsItemMediaType:(id)a0;
- (id)itemMediaTypeAsString:(int)a0;
- (id)playbackStateAsString:(int)a0;
- (id)description;
- (int)StringAsItemMediaSubtype:(id)a0;
- (void).cxx_destruct;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (int)StringAsPlaybackState:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearOutputDevices;
- (id)itemMediaSubtypeAsString:(int)a0;
- (unsigned long long)outputDevicesCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
