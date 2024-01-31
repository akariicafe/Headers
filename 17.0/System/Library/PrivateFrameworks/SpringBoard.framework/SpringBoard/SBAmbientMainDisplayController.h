@class NSString, SBBacklightController, SBAmbientPresentationController, BrightnessSystemClient, NSObject;
@protocol OS_dispatch_queue;

@interface SBAmbientMainDisplayController : NSObject <SBAmbientPresentationObserver, SBBacklightControllerObserver> {
    SBAmbientPresentationController *_ambientPresentationController;
    SBBacklightController *_backlightController;
    BrightnessSystemClient *_brightnessSystemClient;
    NSObject<OS_dispatch_queue> *_brightnessSystemQueue;
    BOOL _ambientPresented;
    BOOL _isCoreBrightnessAmbientModeEnabled;
    long long _backlightState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (id)init;
- (void)dealloc;
- (void)ambientPresentationController:(id)a0 didUpdatePresented:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_shouldEnableCoreBrightnessAmbientMode;
- (void)_updateCoreBrightnessAmbientMode;
- (void)_updateCoreBrightnessAmbientModeForce:(BOOL)a0;
- (id)initWithAmbientPresentationController:(id)a0;

@end
