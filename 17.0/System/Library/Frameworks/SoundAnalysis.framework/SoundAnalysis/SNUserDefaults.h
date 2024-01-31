@class NSString, NSArray, NSPredicate, NSNumber;

@interface SNUserDefaults : NSObject

@property (class, readonly) NSString *microphoneInjectionFilePath;
@property (class, readonly) double sysdiagnoseHistoricalResultsDuration;
@property (class, readonly) NSString *daemonRecordingPath;
@property (class, readonly) BOOL deleteRecordingsWithoutDetection;
@property (class, readonly) NSPredicate *firstPassRecordingPredicate;
@property (class, readonly) double firstPassRecordingHistoryDuration;
@property (class, readonly) BOOL enableSecondPassRecordingInDaemon;
@property (class, readonly) BOOL enableFileServer;
@property (class, readonly) NSString *fileServerRootDirectory;
@property (class, readonly) NSNumber *builtInMicrophoneAnalysisChannelNumber;
@property (class, readonly) NSArray *microphoneArrayChannelMap;

+ (id)builtInMicrophoneAnalysisChannelNumberFromUserDefaultsSnapshot:(id)a0;
+ (id)boolForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1;
+ (BOOL)boolForKey:(id)a0 orDefault:(BOOL)a1 fromUserDefaultsSnapshot:(id)a2;
+ (id)coerceDoubleFromValue:(id)a0 error:(id *)a1;
+ (id)coerceIntegerArrayFromValue:(id)a0 error:(id *)a1;
+ (id)coerceIntegerFromValue:(id)a0 error:(id *)a1;
+ (id)coerceNumberFromValue:(id)a0 error:(id *)a1;
+ (id)coerceStringFromValue:(id)a0 error:(id *)a1;
+ (id)daemonRecordingPathFromUserDefaultsSnapshot:(id)a0;
+ (id)defaultDaemonRecordingPath;
+ (BOOL)deleteRecordingsWithoutDetectionFromUserDefaultsSnapshot:(id)a0;
+ (id)doubleForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1;
+ (id)doubleForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1 error:(id *)a2;
+ (double)doubleForKey:(id)a0 orDefault:(double)a1 fromUserDefaultsSnapshot:(id)a2;
+ (BOOL)enableFileServerFromUserDefaultsSnapshot:(id)a0;
+ (BOOL)enableSecondPassRecordingInDaemonFromUserDefaultsSnapshot:(id)a0;
+ (id)fileServerRootDirectoryFromUserDefaultsSnapshot:(id)a0;
+ (double)firstPassRecordingHistoryDurationFromUserDefaultsSnapshot:(id)a0;
+ (id)firstPassRecordingPredicateFromUserDefaultsSnapshot:(id)a0;
+ (id)integerArrayForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1;
+ (id)integerArrayForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1 error:(id *)a2;
+ (id)integerForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1;
+ (id)integerForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1 error:(id *)a2;
+ (long long)integerForKey:(id)a0 orDefault:(long long)a1 fromUserDefaultsSnapshot:(id)a2;
+ (id)microphoneArrayChannelMapFromUserDefaultsSnapshot:(id)a0;
+ (id)microphoneInjectionFilePathFromUserDefaultsSnapshot:(id)a0;
+ (id)numberForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1 error:(id *)a2;
+ (id)stringForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1;
+ (id)stringForKey:(id)a0 fromUserDefaultsSnapshot:(id)a1 error:(id *)a2;
+ (id)stringForKey:(id)a0 orDefault:(id)a1 fromUserDefaultsSnapshot:(id)a2;
+ (double)sysdiagnoseHistoricalResultsDurationFromUserDefaultsSnapshot:(id)a0;
+ (id)userDefaultsSingleton;
+ (id)userDefaultsSnapshot;

@end
