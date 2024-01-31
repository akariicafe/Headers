@class WLKChannelDetails, NSString, VUIAppInstallerViewController, NSUUID, VUIAccessViewController;

@interface VUIAppInstallCoordinator : NSObject

@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) VUIAppInstallerViewController *installerViewController;
@property (retain, nonatomic) VUIAccessViewController *accessViewController;
@property (retain, nonatomic) NSUUID *uuid;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_installAppWithChannel:(id)a0 punchoutURL:(id)a1 completion:(id /* block */)a2;
- (id)initWithChannelDetails:(id)a0 contentTitle:(id)a1;
- (void)installAppWithPunchoutURL:(id)a0 completion:(id /* block */)a1;

@end
