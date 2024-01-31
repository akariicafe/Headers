@class NSString, CoreTelephonyClient, NSMutableDictionary;

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *imsStatusVoiceDict;
@property (retain) NSMutableDictionary *imsStatusSMSDict;
@property (retain) NSMutableDictionary *rejectCauseCodeDict;
@property (retain) NSMutableDictionary *supportedDataRatesDict;
@property (retain) NSMutableDictionary *maxDataRateDict;
@property (retain) NSMutableDictionary *operatorNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)clearCache;
- (void)preferredDataSimChanged:(id)a0;
- (id)getLogger;
- (void).cxx_destruct;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)dataRatesChanged;
- (void)imsRegistrationChanged:(id)a0 info:(id)a1;
- (BOOL)IMSStatusVoice:(id)a0;
- (BOOL)IMSStatusSMS:(id)a0;
- (void)fetchIMSStatus;
- (void)fetchLocalizedOperatorName;
- (void)fetchMaxDataRate;
- (void)fetchRejectCauseCode;
- (void)fetchSupportedDataRates;
- (void)handleDataUsageChanged;
- (id)localizedOperatorName:(id)a0;
- (long long)maxDataRate:(id)a0;
- (id)rejectCauseCode:(id)a0;
- (void)setMaxDataRate:(id)a0 dataRate:(long long)a1;
- (id)supportedDataRates:(id)a0;

@end
