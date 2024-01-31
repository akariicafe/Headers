@class NSArray, NSDictionary, NSPredicate, NSURL, NSDate;

@interface DTOSLogLoaderConfiguration : NSObject

@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) unsigned long long signpostConfig;
@property (readonly, nonatomic) unsigned long long loaderExclusions;
@property (readonly, nonatomic) unsigned long long columnInclusions;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) BOOL enableBacktraceReplacement;
@property (readonly, nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } machTimebase;
@property (readonly, nonatomic) unsigned long long machContinuousStart;
@property (readonly, nonatomic) NSURL *importedFileURL;
@property (readonly, nonatomic) NSDate *importForcedStartDate;
@property (readonly, nonatomic) NSDate *importForcedEndDate;
@property (readonly, nonatomic) BOOL trackPidToExecNameMapping;
@property (readonly, nonatomic) NSArray *dynamicTracingEnabledSubsystems;
@property (readonly, nonatomic) NSDictionary *logSubsystemCategoryPairsToEnable;
@property (readonly, nonatomic) NSDictionary *signpostSubsystemCategoryPairsToEnable;

- (void).cxx_destruct;
- (id)initWithFilterPredicate:(id)a0 signpostConfig:(unsigned long long)a1 loaderExclusions:(unsigned long long)a2 columnInclusions:(unsigned long long)a3 mode:(unsigned long long)a4 enableBacktraceReplacement:(BOOL)a5 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a6 machContinuousStart:(unsigned long long)a7 importedFileURL:(id)a8 importForcedStartDate:(id)a9 importForcedEndDate:(id)a10 trackPidToExecNameMapping:(BOOL)a11 dynamicTracingEnabledSubsystems:(id)a12 logSubsystemCategoryPairsToEnable:(id)a13 signpostSubsystemCategoryPairsToEnable:(id)a14;

@end
