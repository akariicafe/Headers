@class VUIAppContext, WLKChannelDetails, VUIContentRating, NSURL, NSString;

@interface VUIActionPunchout : VUIAction

@property (retain, nonatomic) VUIAppContext *appContext;
@property (nonatomic) BOOL shouldAvoidInstallSheet;
@property (nonatomic) BOOL shouldPunchOutAfterAppInstallation;
@property (nonatomic) BOOL shouldRunPreflightManager;
@property (retain, nonatomic) VUIContentRating *contentRating;
@property (retain, nonatomic) NSURL *punchoutURL;
@property (nonatomic) BOOL isPlaybackURL;
@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (nonatomic) BOOL isEntitledToPlay;
@property (nonatomic) BOOL isAdultContent;
@property (copy, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *referenceID;
@property (retain, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)_continueInstallFlowAfterPreflight:(id /* block */)a0;
- (BOOL)_isValidAppInstalled;
- (void)_openAirplayPicker:(id /* block */)a0;
- (void)_openPunchoutURL:(id /* block */)a0;
- (void)_presentASCSingleAppInstaller:(id /* block */)a0;
- (void)_showErrorMessageAlert:(id)a0;
- (void)_startAppInstallFlow:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)canPerformNow;
- (void)checkVppaStatus:(id /* block */)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (void)showAPPInstallRestrictedErrorAlert;
- (id)topPresentedViewController;

@end
