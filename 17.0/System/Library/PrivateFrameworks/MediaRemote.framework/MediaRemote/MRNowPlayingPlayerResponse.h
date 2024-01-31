@class NSArray, MRPlaybackQueue, MRClient, NSDate, MRPlayerPath, MRDestination;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MRDestination *destination;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRClient *clientProperties;
@property (copy, nonatomic) NSDate *deviceLastPlayingDate;
@property (copy, nonatomic) NSDate *playerLastPlayingDate;
@property (readonly, copy, nonatomic) MRPlayerPath *playerPath;
@property (readonly, copy, nonatomic) NSArray *proxiableSupportedCommands;
@property (readonly, nonatomic) int shuffleMode;
@property (readonly, nonatomic) int repeatMode;
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic) BOOL deviceHasPlayedRecently;
@property (readonly, nonatomic) BOOL playerHasPlayedRecently;
@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) BOOL hasPlayedRecently;

- (void)setPlayerPath:(id)a0;
- (id)debugDictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
