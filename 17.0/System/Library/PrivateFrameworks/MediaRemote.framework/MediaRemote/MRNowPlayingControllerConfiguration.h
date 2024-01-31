@class MRDestination, NSString, MRPlaybackQueueRequest;

@interface MRNowPlayingControllerConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isSingleShot) BOOL singleShot;
@property (copy, nonatomic) id /* block */ discoveryPredicate;
@property (copy, nonatomic) MRPlaybackQueueRequest *playbackQueueRequest;
@property (copy, nonatomic) MRDestination *destination;
@property (nonatomic) BOOL requestSupportedCommands;
@property (nonatomic) BOOL requestPlaybackState;
@property (nonatomic) BOOL requestLastPlayingDate;
@property (nonatomic) BOOL requestClientProperties;
@property (nonatomic) BOOL requestPlaybackQueue;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL wantsChangeCallbacksDuringInitialLoad;

- (id)initWithOrigin:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestination:(id)a0;

@end
