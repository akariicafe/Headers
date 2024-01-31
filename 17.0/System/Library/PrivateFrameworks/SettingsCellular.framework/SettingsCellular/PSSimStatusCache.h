@class NSMutableDictionary, NSString, CTXPCServiceSubscriptionInfo, CTXPCServiceSubscriptionContext, CoreTelephonyClient;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (retain) CTXPCServiceSubscriptionContext *currentDataSubscriptionContext;
@property (retain) CTXPCServiceSubscriptionContext *userDefaultVoiceSubscriptionContext;
@property (retain) NSMutableDictionary *simHardwareTypeDict;
@property (nonatomic) BOOL isAnySimPresent;
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)subscriptionInfoDidChange;
- (void)currentDataSimChanged:(id)a0;
- (id)simStatus:(id)a0;
- (id)init;
- (void)fetchActiveDataSubscriptionContextIfNeeded;
- (void)preferredDataSimChanged:(id)a0;
- (long long)simHardwareInfo:(id)a0;
- (void)willEnterForeground;
- (BOOL)isSlotActiveDataSlot:(long long)a0;
- (id)getLogger;
- (void)clearSimHardwareInfoCache;
- (id)subscriptionContexts;
- (id)activeDataSubscriptionContext;
- (void)fetchDefaultVoiceSubscriptionContextIfNeeded;
- (void)clearSubscriptionContextCache;
- (id)defaultVoiceSubscriptionContext;
- (void).cxx_destruct;
- (void)updateIsAnySimPresent;
- (id)subscriptionsInUse;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)initWithCoreTelephonyClient:(id)a0;
- (void)fetchSimHardwareInfo;
- (void)fetchSubscriptionContexts;
- (void)fetchSimStatus;

@end
