@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (id)init;
- (void)_initNowPlayingPlay;
- (id)_init;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_initNowPlayingPause;
- (void)_initStarkDisconnect;
- (void)_initStarkConnect;
- (void)_handlePause;
- (void).cxx_destruct;
- (void)_persist;
- (void)_handlePlay;

@end
