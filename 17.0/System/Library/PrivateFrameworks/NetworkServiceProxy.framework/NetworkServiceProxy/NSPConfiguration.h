@class NSDate, NSString, NSArray, NSURLSession, NSPPrivacyProxyConfiguration, NSDictionary, NSNumber;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_configServerHost;
    NSNumber *_version;
    long long _diskVersion;
    NSPConfiguration *_defaults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *version;
@property (copy) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSString *etag;
@property (copy) NSNumber *epoch;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSNumber *configServerPort;
@property (copy) NSString *configServerPath;
@property (copy) NSNumber *urlRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession;
@property BOOL ignoreInvalidCerts;
@property (retain, nonatomic) NSDictionary *edgeSets;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) BOOL isDead;
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration;
@property (copy, nonatomic) NSNumber *userTier;
@property (copy) NSNumber *proxyTrafficState;
@property (copy) NSDate *configurationFetchDate;
@property (copy) NSDate *resetTomorrowDate;
@property (copy) NSDate *anyAppEnabledDate;
@property (copy) NSNumber *willResetSubscriberTierTomorrow;
@property (copy) NSNumber *cloudSubscriptionCheckEnabled;
@property (retain, nonatomic) NSNumber *geohashSharingEnabledStatus;
@property (retain, nonatomic) NSString *geohashOverride;
@property (retain, nonatomic) NSNumber *preferredPathRoutingEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensAllowTools;
@property (retain, nonatomic) NSNumber *inProcessFlowDivert;
@property (retain, nonatomic) NSNumber *proxyAccountType;
@property (retain, nonatomic) NSNumber *proxyAccountUnlimited;
@property (retain, nonatomic) NSNumber *userPreferredTier;
@property (retain, nonatomic) NSNumber *subscriberEnabledFromNonSettingsApp;
@property (retain, nonatomic) NSNumber *trialConfigVersion;

+ (id)proxyTrafficStateToString:(id)a0;
+ (id)proxyAccountTypeToString:(id)a0;
+ (BOOL)validatePrivacyProxyConfiguration:(id)a0;
+ (id)defaultConfiguration;
+ (void)verifyConfigurationSignature:(id)a0 configuration:(id)a1 host:(id)a2 validateCert:(BOOL)a3 completionHandler:(id /* block */)a4;

- (id)tierToString;
- (void)removeFromKeychain;
- (id)createConfigFetchURLWithDomain:(id)a0 timestamp:(id)a1;
- (id)initFromKeychain;
- (void)teardown;
- (id)getEdgeSetForAppRule:(id)a0;
- (id)getEdgeSetForSigningIdentifier:(id)a0;
- (id)copyTLVData;
- (void)encodeWithCoder:(id)a0;
- (void)setupNSURLSession;
- (id)description;
- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1 waldoSource:(long long)a2;
- (id)copyAgentResultsForAppRule:(id)a0;
- (void)updateNetworkAgents;
- (void).cxx_destruct;
- (BOOL)evaluateEnableRatios;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)a0;
- (id)initFromTLVs:(id)a0;
- (void)merge:(id)a0;
- (id)getCurrentKeyBagForAppRule:(id)a0;
- (void)incrementSessionCountersOnFirstLaunch;
- (BOOL)resetStaleEdgeSets;
- (id)initFromPreferences;
- (BOOL)saveToPreferences;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (id)diagnostics;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToKeychain;

@end
