@interface AFMultiUserDataSyncUtils : NSObject

+ (id)suiteName;
+ (id)audioAppSignalsDataKey;
+ (id)audioAppSignalsLastSyncTimestampKey;
+ (id)audioAppSignalsTimestampKey;
+ (id)localTime;
+ (id)retrieveAudioAppSignals;
+ (void)storeAudioAppSignals:(id)a0;

@end
