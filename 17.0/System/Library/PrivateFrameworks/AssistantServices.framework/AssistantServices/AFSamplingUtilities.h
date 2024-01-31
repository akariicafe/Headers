@interface AFSamplingUtilities : NSObject

+ (id)component;
+ (id)timezone;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)deleteItemAtFilePath:(id)a0;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledSubDirectoryPath;
+ (id)samplingDateAsString;

@end
