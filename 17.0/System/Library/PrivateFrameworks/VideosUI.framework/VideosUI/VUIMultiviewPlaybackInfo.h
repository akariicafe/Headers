@class AVPlayerViewController, NSString, VUIPlayer;

@interface VUIMultiviewPlaybackInfo : NSObject

@property (retain, nonatomic) VUIPlayer *player;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (nonatomic) long long context;
@property (readonly, nonatomic) BOOL playsFromStart;
@property (readonly, nonatomic) NSString *broadcastLocale;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0 playerViewController:(id)a1 playsFromStart:(BOOL)a2 broadcastLocale:(id)a3;

@end
