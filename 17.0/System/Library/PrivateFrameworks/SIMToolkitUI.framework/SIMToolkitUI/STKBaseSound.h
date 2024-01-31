@class NSString, BSTimer;

@interface STKBaseSound : NSObject <STKSound> {
    BSTimer *_timer;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL playsOnce;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDuration:(double)a0;
- (void).cxx_destruct;
- (void)playSound;
- (void)_sync_playSound;
- (void)_sync_stopSound;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (void)stopSound;

@end
