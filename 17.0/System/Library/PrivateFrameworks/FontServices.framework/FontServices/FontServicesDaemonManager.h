@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (void)scheduleFontFilesDeletion:(id)a0;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void)checkinForWebKitProcess:(id)a0 reply:(id /* block */)a1;
- (void)requestFonts:(id)a0 forClient:(id)a1;
- (void)fontChanged:(id)a0 reply:(id /* block */)a1;
- (void)synchronizeFontAssets:(id)a0 reply:(id /* block */)a1;
- (void)resetIssuedFontsFor:(id)a0;
- (void)checkin:(id /* block */)a0;
- (void)requestFonts:(id)a0 reply:(id /* block */)a1;
- (void)updatingUserFonts:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fontAddedInfo:(id)a0 addedURLStrings:(id)a1 removedURLStrings:(id)a2;
- (void)checkinForFontPicker:(id /* block */)a0;

@end
