@class NSDictionary, RMUIPasscodeViewModel, RMObserverStore;

@interface RMUIPasscodeViewModelProvider : NSObject

@property (copy, nonatomic) NSDictionary *passcodeSettings;
@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (retain, nonatomic) RMObserverStore *observerStore;

+ (void)_applyPasscodeDeclaration:(id)a0 toConglomerate:(id)a1;

- (id)init;
- (id)_minimumLength;
- (id)description;
- (void).cxx_destruct;
- (id)_maximumFailedAttempts;
- (id)_maximumGracePeriodInMinutes;
- (id)_maximumInactivityInMinutes;
- (id)_maximumPasscodeAgeInDays;
- (id)_minimumComplexCharacters;
- (id)_passcodeReuseLimit;
- (id)_requireAlphanumericPasscode;
- (id)_requireComplexPasscode;
- (id)_requirePasscode;
- (void)_updateViewModelsIsManaged:(BOOL)a0 passcodeSettings:(id)a1;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)a0;

@end
