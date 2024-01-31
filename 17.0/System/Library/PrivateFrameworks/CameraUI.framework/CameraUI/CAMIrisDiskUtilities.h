@interface CAMIrisDiskUtilities : NSObject

+ (BOOL)hasPendingWork;
+ (id)_delimiterForFilenames;
+ (id)_substituteForDotInBundleIdentifier;
+ (id)videoDestinationPathForStillImageRequest:(id)a0 captureTime:(double)a1 isEV0ForHDR:(BOOL)a2 bundleIdentifier:(id)a3;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(BOOL)a0;
+ (id)videoPathExtension;
+ (BOOL)isValidVideoDestinationPath:(id)a0;
+ (id)irisVideoDirectoryPath;
+ (BOOL)parseVideoDestinationPath:(id)a0 forStillImagePersistenceUUID:(id *)a1 videoPersistenceUUID:(id *)a2 captureDevice:(long long *)a3 captureOrientation:(long long *)a4 captureTime:(double *)a5 persistenceOptions:(long long *)a6 temporaryPersistenceOptions:(long long *)a7 bundleIdentifier:(id *)a8 filterName:(id *)a9;

@end
