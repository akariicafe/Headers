@class NSString, NSArray, CNTimestamped, CTStewieStateMonitor, CoreTelephonyClient;

@interface CNACTStewieFacade : NSObject <CTStewieStateMonitorDelegate, CNACTStewieFacade> {
    CoreTelephonyClient *_coreTelephonyClient;
    CTStewieStateMonitor *_stateMonitor;
    CNTimestamped *_emergencyMemo;
    CNTimestamped *_avocetMemo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isEmergencyEnabled;
@property (readonly) NSArray *emergencyTerms;
@property (readonly) BOOL isAvocetEnabled;
@property (readonly) NSArray *avocetTerms;

+ (double)ageOfMemo:(id)a0;
+ (BOOL)isMemoValid:(id)a0;
+ (BOOL)isMessagesApp;
+ (id)localizedAvocetPhrases;
+ (id)localizedEmergencyPhrases;

- (id)init;
- (void)stateChanged:(id)a0;
- (void).cxx_destruct;
- (void)startMonitoring;
- (id)numbers;
- (id)initWithCoreTelephonyClient:(id)a0 stateMonitor:(id)a1;
- (BOOL)withLock_isAvocetEnabled;
- (BOOL)withLock_isEmergencyEnabled;

@end
