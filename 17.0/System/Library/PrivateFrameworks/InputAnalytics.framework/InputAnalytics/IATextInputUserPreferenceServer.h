@interface IATextInputUserPreferenceServer : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;
@property (nonatomic) BOOL readyToReportPreferenceToEventHandler;

- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)dispatchUserPreference:(long long)a0 withValue:(long long)a1;
- (long long)reportAutocorrectionEnablement;
- (void)reportStateForUserPreference:(long long)a0;

@end
