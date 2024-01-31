@interface TVLPersistenceManager : NSObject

+ (id)URLForRecording;
+ (id)allRecordingPaths;
+ (id)documentsDirectory:(id)a0;
+ (void)eraseAllRecordings;
+ (id)recordingsDirectory:(id)a0;

@end
