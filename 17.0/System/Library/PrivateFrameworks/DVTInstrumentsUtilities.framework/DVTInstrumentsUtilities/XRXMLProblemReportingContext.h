@class NSObject, NSURL, NSFileHandle;
@protocol OS_os_log;

@interface XRXMLProblemReportingContext : NSObject

@property (retain, nonatomic) NSFileHandle *errorFile;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) NSURL *urlBeingParsed;
@property (nonatomic) BOOL passed;

- (id)init;
- (void).cxx_destruct;
- (void)reportProblemWithElement:(id)a0 failure:(id)a1;
- (void)reportWarningWithElement:(id)a0 failure:(id)a1;

@end
