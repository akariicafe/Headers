@class NSData, NSString;

@interface FBKSLaunchConfiguration_FrameworkPrivateName : NSObject {
    void /* unknown type, empty encoding */ localizedPromptTitle;
    void /* unknown type, empty encoding */ localizedPromptMessage;
    void /* unknown type, empty encoding */ localizedAlertViewProceedButtonTitle;
    void /* unknown type, empty encoding */ localizedAlertViewDeclineButtonTitle;
    void /* unknown type, empty encoding */ skipsPrompt;
    void /* unknown type, empty encoding */ alwaysLaunchInRemoteAlert;
    void /* unknown type, empty encoding */ notifyImmediately;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic) void /* unknown type, empty encoding */ promptStyle;
@property (nonatomic, copy) NSString *localizedPromptTitle;
@property (nonatomic, copy) NSString *localizedPromptMessage;
@property (nonatomic, copy) NSString *localizedAlertViewProceedButtonTitle;
@property (nonatomic, copy) NSString *localizedAlertViewDeclineButtonTitle;

+ (id)fromJSONWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setAlwaysLaunchInRemoteAlert:(BOOL)a0;
- (void)setNotifyImmediately:(BOOL)a0;
- (void)setToSkipPrompt:(BOOL)a0;

@end
