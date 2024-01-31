@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)donationServiceWillStart;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)foundUnhashableValue:(id)a0;
- (void)acceptingDonations:(id)a0;
- (id)init;
- (void)willListRejections;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)didDiscoverExtensions;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)willDiscoverExtensions;
- (void)willLoadExtensionVersions;
- (void)donationServiceDidStart;
- (void)agentWillStart;
- (void)preExpiredDonations:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)agentDidStart;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)donationServiceWillStop;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)featureWillDisable;
- (void)denyingRequestFromProcess:(int)a0;
- (void)didListRejections;
- (void)didDiscoverExtension:(id)a0;
- (void)featureDidEnable;
- (void)maintenanceServiceDidStart;
- (void)endRestorePersistedState;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)didRemoveAllRejections;
- (void)maintenanceServiceWillStop;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)maintenanceServiceWillStart;
- (void).cxx_destruct;
- (void)featureDidDisable;
- (void)willRemoveAllRejections;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)willSaveExtensionVersions;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)beginRestorePersistedState;
- (void)featureNotEnabled:(SEL)a0;
- (void)featureWillEnable;
- (void)agentWillStop;

@end
