@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;
@property (retain, nonatomic) NSString *etlKey;
@property (readonly) NSString *oldLogFile;

+ (id)bootArgs;
+ (unsigned int)codeSigningMonitor;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(BOOL)a0;

- (id)init;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)symlink:(id)a0;
- (id)incidentID;
- (BOOL)isActionable;
- (BOOL)isAppleTV;
- (id)additionalIPSMetadata;
- (id)reportNamePrefix;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (double)captureTime;
- (void).cxx_destruct;
- (id)appleCareDetails;
- (id)problemType;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1;
- (BOOL)saveWithOptions:(id)a0;

@end
