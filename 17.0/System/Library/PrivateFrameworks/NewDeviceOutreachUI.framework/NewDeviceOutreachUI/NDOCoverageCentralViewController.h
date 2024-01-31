@class NSString, NDOManager, NDOACController, NDODevice, NSMutableDictionary, UIContentUnavailableConfiguration, NSMutableArray, NDOAppleCareAMSUIViewController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NDOCoverageCentralViewController : PSListController <NDOAppleCareAMSUIViewPresenterProtocol> {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
    UIContentUnavailableConfiguration *_loadingConfig;
}

@property BOOL isFromDeeplink;
@property (retain) NSString *deeplinkParams;
@property (retain) NSString *ulSalesURL;
@property (retain) NSString *sessionID;
@property (retain, nonatomic) NDOManager *ndoManager;
@property (retain, nonatomic) NDODevice *defaultDevice;
@property (retain, nonatomic) NSMutableArray *pairedDevices;
@property (retain, nonatomic) NSMutableArray *allDevices;
@property (retain) NSMutableDictionary *deviceInfoDict;
@property (retain) NSMutableDictionary *deviceSequenceDict;
@property (retain, nonatomic) NDOAppleCareAMSUIViewController *amsUIVC;
@property BOOL isSignedIn;
@property (weak, nonatomic) NDOACController *acController;
@property BOOL openDefaultDeviceDetails;

- (id)init;
- (void)resetAll;
- (void)_refresh:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)openURL:(id)a0;
- (void)showUI;
- (void)completeWithStatus:(unsigned long long)a0;
- (void)footerTapped:(id)a0;
- (void)fetchAllDevices;
- (id)_errorStateConfig;
- (id)_getDevicePayloadWithParams:(id)a0;
- (id)_getParamsDictFromPath:(id)a0;
- (void)_getUpdatedParamsFromPath:(id)a0 withCompletion:(id /* block */)a1;
- (id)_noAccountConfig;
- (void)addFooterLabelToSpecifier:(id)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0 params:(id)a1;
- (void)completeWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)fetchAllDeviceInfoUsingPolicy:(unsigned long long)a0 sessionID:(id)a1 params:(id)a2 isSales:(BOOL)a3 andForcePostFollowup:(BOOL)a4 withReply:(id /* block */)a5;
- (void)getAllDeviceInfoUsingPolicy:(unsigned long long)a0 sessionID:(id)a1 params:(id)a2 isSales:(BOOL)a3 andForcePostFollowup:(BOOL)a4 withReply:(id /* block */)a5;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 sessionID:(id)a2 params:(id)a3 andForcePostFollowup:(BOOL)a4 withReply:(id /* block */)a5;
- (void)openAMSUIWithURL:(id)a0 httpBody:(id)a1;
- (id)updateCells;
- (void)updateDefaultDeviceWithDeviceInfo:(id)a0;
- (void)updateDeviceInfoForDevice:(id)a0 usingPolicy:(unsigned long long)a1 params:(id)a2 forceUpdateFollowup:(BOOL)a3 withReply:(id /* block */)a4;

@end
