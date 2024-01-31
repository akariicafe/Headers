@class NSURL, NSString;

@interface VNClusteringLogger : NSObject

@property (readonly) NSURL *logFolderURL;
@property (readonly) NSURL *logFileURL;
@property (readonly) BOOL logEnabled;
@property (readonly) NSString *fileNameBase;

+ (id)currentDateTime;
+ (void)appendString:(id)a0 toLogFile:(id)a1;
+ (BOOL)isLogEnabled;
+ (id)padStringWithSpaces:(id)a0 toSize:(long long)a1;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logEnabled:(BOOL)a1;
- (id)initWithOptions:(id)a0 logEnabled:(BOOL)a1 logFileNameBase:(id)a2;
- (void)logClusterLookupMapL0:(const void *)a0;
- (void)logClusterLookupMapL1:(const void *)a0;
- (void)logClusterMap:(const void *)a0 level:(id)a1;
- (void)logClusterMapL0:(const void *)a0;
- (void)logClusterMapL1:(const void *)a0;
- (void)logString:(id)a0;
- (void)resetFileNameURLWithCurentDateTime;

@end
