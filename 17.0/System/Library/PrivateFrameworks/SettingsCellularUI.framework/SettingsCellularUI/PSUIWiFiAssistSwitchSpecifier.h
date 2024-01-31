@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    struct __CTServerConnection { } *_serverConnection;
}

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (unsigned long long)dataUsage;
- (id)initDefault;
- (void)dealloc;
- (id)getLogger;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
