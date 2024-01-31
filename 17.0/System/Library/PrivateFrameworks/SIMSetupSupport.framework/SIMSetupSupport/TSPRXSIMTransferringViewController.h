@class CoreTelephonyClient, IMOneTimeCodeAccelerator;

@interface TSPRXSIMTransferringViewController : TSIDSSimTransferringViewController

@property (retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;
@property (retain) CoreTelephonyClient *client;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (void)_maybeEnableOneTimeCodeCheck;
- (void)_setupOneTimeCodeDetection;

@end
