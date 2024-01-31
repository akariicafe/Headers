@class AVFlashlight;

@interface WFFlashlightSettingsClient : WFSettingsClient

@property (readonly, nonatomic) AVFlashlight *flashlight;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithFlashlight:(id)a0;
- (void)toggleWithBrightnessLevel:(float)a0 completionHandler:(id /* block */)a1;
- (void)turnOffWithCompletionHandler:(id /* block */)a0;
- (void)turnOnWithBrightnessLevel:(float)a0 completionHandler:(id /* block */)a1;

@end
