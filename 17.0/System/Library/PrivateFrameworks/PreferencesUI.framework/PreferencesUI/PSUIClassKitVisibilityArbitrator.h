@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject

@property (nonatomic) unsigned long long visibilityState;
@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;

- (id)init;
- (void)dealloc;
- (void)reloadVisibilityState;
- (void)settingsVisibilityDidChange:(id)a0;
- (void).cxx_destruct;

@end
