@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject

@property (copy, nonatomic) NSString *reportsDirectoryPath;
@property (readonly, nonatomic) _DPDaemonConnection *connection;

+ (id)submittedReports;
+ (id)submittedReportsInDirectory:(id)a0;

- (id)init;
- (id)initWithDirectoryPath:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)reportsNotYetSubmitted;
- (void)retireReports:(id)a0;

@end
