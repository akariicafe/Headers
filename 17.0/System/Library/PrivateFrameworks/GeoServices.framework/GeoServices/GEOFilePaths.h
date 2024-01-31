@class NSString, NSURL;

@interface GEOFilePaths : NSObject <GEOPListStateCapturing> {
    unsigned long long _stateCaptureHandle;
}

@property (class, readonly) NSString *_internal_homeDirectory;
@property (class, readonly) NSString *_internal_geoServicesCacheDirectoryPath;
@property (class, readonly) NSString *homeDirectory;
@property (class, readonly) NSString *preferencesDirectoryPath;
@property (class, readonly) NSString *geodCacheDirectoryPath;
@property (class, readonly) NSString *geoServicesCacheDirectoryPath;
@property (class, readonly) NSString *tileCacheDirectoryPath;
@property (class, readonly) NSString *requestCountsDBFilePath;
@property (class, readonly) NSString *locationShifterDBFilePath;
@property (class, readonly) NSString *analyticsUploadDirectoryPath;
@property (class, readonly) NSString *mapsSuggestionsCacheDirectoryPath;
@property (class, readonly) NSString *analyticsPipelineFilePath;
@property (class, readonly) NSURL *imageServiceDBFileURL;
@property (class, nonatomic) BOOL allowOverrideByTests;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createDirectoryCopyingAttributesFromParent:(id)a0 error:(id *)a1;
+ (id)pathFor:(unsigned long long)a0;
+ (id)dictionaryRepresentation;
+ (id)urlFor:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;

@end
