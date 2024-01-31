@class NSObject, _WBSBiomeStream;
@protocol OS_dispatch_queue;

@interface WBSBiomeDonationManager : NSObject {
    NSObject<OS_dispatch_queue> *_streamAccessQueue;
    _WBSBiomeStream *_autoPlayStream;
    _WBSBiomeStream *_navigationsStream;
    _WBSBiomeStream *_webPagePerformanceStream;
    _WBSBiomeStream *_webAppInFocusStream;
}

@property (class, readonly, nonatomic) WBSBiomeDonationManager *sharedManager;

+ (BOOL)isBiomeStreamDonationAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)donateWebAppInFocusEventWithStarting:(BOOL)a0 date:(id)a1 webAppType:(long long)a2 identifier:(id)a3 name:(id)a4 manifestId:(id)a5;
- (id)_autoPlayStream;
- (int)_biomeDeviceClassForUserAgent:(long long)a0;
- (int)_biomeSignalForAutoPlaySignal:(long long)a0;
- (int)_biomeWebAppInFocusWebAppTypeForWebAppType:(long long)a0;
- (void)_clearEventsDonatedSinceDate:(id)a0;
- (void)_donateWebPagePerformanceEventWithEvent:(int)a0 domain:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (id)_navigationsStream;
- (id)_webAppInFocusStream;
- (id)_webPagePerformanceStream;
- (int)_webPerformanceEventForDiagnosticLoggingKey:(id)a0;
- (void)clearEventsDonatedSinceDate:(id)a0;
- (void)donateAutoPlayEventWithSignal:(long long)a0 domain:(id)a1 countryCode:(id)a2 webPageLoadedOverPrivateRelay:(BOOL)a3;
- (BOOL)donateForDiagnosticLoggingKey:(id)a0 value:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (void)donateNavigationWithHighLevelDomain:(id)a0 userAgent:(long long)a1 wasPrivateRelayed:(BOOL)a2 statusCode:(long long)a3;
- (void)performPendingDeletionsBeforeTermination;

@end
