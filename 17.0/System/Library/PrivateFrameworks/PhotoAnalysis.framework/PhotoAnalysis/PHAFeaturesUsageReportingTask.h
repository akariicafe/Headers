@class NSString;

@interface PHAFeaturesUsageReportingTask : NSObject <PHAPhotoLibraryTask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_reportCameraSharingSettingsWithPhotoLibrary:(id)a0 andAnalytics:(id)a1;
+ (BOOL)shouldReportSettingsWithLoggingConnection:(id)a0;
+ (void)updateLastReportSettings;
+ (id)_dateFormatter;

- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (id)_libraryScopedWorkerFeaturesUsageURLForPhotoLibrary:(id)a0;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)recordFeatureUsageFromCounts:(id)a0 forPhotoLibrary:(id)a1 loggingConnection:(id)a2 error:(id *)a3;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_libraryScopedWorkerFeaturesUsageForLibrary:(id)a0 loggingConnection:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;

@end
