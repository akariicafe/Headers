@class NSString, NSObject;
@protocol OS_os_log;

@interface MXBundleUtil : NSObject <MXBundleUtilProtocol>

@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIDFromPid:(int)a0;
- (id)bundleIDFromAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_bundleIDFromURL:(id)a0;
- (BOOL)isAppExtensionFromBundleID:(id)a0;
- (BOOL)isAppInstalledForBundleID:(id)a0;
- (id)mainAppBundleIDforExtension:(id)a0;
- (id)teamIDFromAuditToken:(struct { unsigned int x0[8]; })a0;

@end
