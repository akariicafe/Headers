@class NSString, NSArray, NSDate, NSNumber, NSObject;
@protocol OS_os_transaction;

@interface MXCoreSessionBase : NSObject

@property (retain) NSString *audioCategory;
@property (retain) NSString *audioMode;
@property (retain) NSString *clientName;
@property (retain) NSNumber *clientPID;
@property (retain) NSString *displayID;
@property (retain) NSNumber *ID;
@property (retain) NSArray *originalReporterIDs;
@property (retain) NSArray *reporterIDs;
@property (retain) NSString *routingContextUUID;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) int coreSessionType;
@property (nonatomic) BOOL enableBluetoothRecordingPreference;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) BOOL isNowPlayingApp;
@property (nonatomic) BOOL isTheAssistant;
@property (nonatomic) BOOL reporterStarted;
@property (retain) NSDate *timestampWhenMostRecentlyActivated;
@property (nonatomic) NSObject<OS_os_transaction> *activeOSTransaction;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL hasInput;
@property (nonatomic) BOOL hasPhoneCallBehavior;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isEligibleForBTSmartRoutingConsideration;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL mixesWithEveryone;
@property (nonatomic) unsigned long long mxSessionIDCounter;

- (id)init;
- (void)dealloc;
- (id)info;
- (BOOL)hasAudioCategory:(id)a0;
- (BOOL)hasAudioMode:(id)a0;
- (BOOL)isSidekick;
- (void)updateClientName:(id)a0;
- (void)updateDefaultInterruptionFadeDuration:(id)a0;
- (BOOL)wasRecentlyActivated;

@end
