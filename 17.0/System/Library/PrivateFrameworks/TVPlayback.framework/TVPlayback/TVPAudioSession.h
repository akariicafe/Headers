@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateIfNecessary;
- (void)_mediaServicesReset:(id)a0;

@end
