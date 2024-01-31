@interface IMAudioSessionController : NSObject

@property (getter=isActive) BOOL active;
@property (getter=isDirty) BOOL dirty;
@property unsigned long long options;
@property (readonly) BOOL shouldUseSpeaker;
@property (readonly) BOOL shouldStopPlayingWhenSilent;
@property (readonly) BOOL shouldDuckOthers;

+ (id)sharedInstance;
+ (id)queue;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)configureAudioSessionWithOptions:(unsigned long long)a0;
- (void)setActive:(BOOL)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
