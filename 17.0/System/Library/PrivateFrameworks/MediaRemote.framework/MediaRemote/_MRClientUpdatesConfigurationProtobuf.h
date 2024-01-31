@class NSMutableArray;

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char artworkUpdates : 1; unsigned char keyboardUpdates : 1; unsigned char nowPlayingUpdates : 1; unsigned char outputDeviceUpdates : 1; unsigned char systemEndpointUpdates : 1; unsigned char volumeUpdates : 1; } _has;
}

@property (nonatomic) BOOL hasNowPlayingUpdates;
@property (nonatomic) BOOL nowPlayingUpdates;
@property (nonatomic) BOOL hasArtworkUpdates;
@property (nonatomic) BOOL artworkUpdates;
@property (nonatomic) BOOL hasVolumeUpdates;
@property (nonatomic) BOOL volumeUpdates;
@property (nonatomic) BOOL hasKeyboardUpdates;
@property (nonatomic) BOOL keyboardUpdates;
@property (nonatomic) BOOL hasOutputDeviceUpdates;
@property (nonatomic) BOOL outputDeviceUpdates;
@property (nonatomic) BOOL hasSystemEndpointUpdates;
@property (nonatomic) BOOL systemEndpointUpdates;
@property (retain, nonatomic) NSMutableArray *subscribedPlayerPaths;

+ (Class)subscribedPlayerPathsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSubscribedPlayerPaths:(id)a0;
- (void)clearSubscribedPlayerPaths;
- (id)subscribedPlayerPathsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedPlayerPathsCount;

@end
