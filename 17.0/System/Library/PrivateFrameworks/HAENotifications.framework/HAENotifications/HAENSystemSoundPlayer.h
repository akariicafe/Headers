@class NSDictionary;

@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary *_options;
    BOOL _turnOFFSound;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)playSystemSoundWithEvent:(id)a0 completion:(id /* block */)a1;

@end
