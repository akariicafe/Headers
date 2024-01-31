@interface SFEntitlements : NSObject

@property (nonatomic) BOOL symptomAnalyticsTrain;
@property (nonatomic) BOOL symptomAnalyticsSweep;
@property (nonatomic) BOOL symptomAnalyticsRefresh;
@property (nonatomic) BOOL symptomAnalyticsSetWatchpoint;
@property (nonatomic) BOOL symptomAnalyticsNetworkBitmap;
@property (nonatomic) BOOL symptomAnalyticsQuery;
@property (nonatomic) BOOL symptomAnalyticsReset;
@property (nonatomic) BOOL symptomAnalyticsConfigure;
@property (nonatomic) BOOL symptomAnalyticsSetSnapshot;
@property (nonatomic) BOOL symptomAnalyticsHealthCheck;
@property (nonatomic) BOOL symptomsNetworkOfInterest;
@property (nonatomic) BOOL symptomsNetDomainsAdmin;
@property (nonatomic) BOOL symptomsRNFTest;
@property (nonatomic) BOOL symptomsSymptomsToolTest;
@property (nonatomic) BOOL symptomsNDF;
@property (nonatomic) BOOL symptomsCOSMAdmin;
@property (nonatomic) BOOL symptomsNWActivityDatabase;

+ (id)stringForEntitlement:(unsigned long long)a0;
+ (unsigned long long)entitlementForString:(id)a0;

- (BOOL)boolForEntitlementString:(id)a0;
- (BOOL)boolForEntitlement:(unsigned long long)a0;

@end
