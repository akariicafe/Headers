@class NSUUID, NSString, NSISO8601DateFormatter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SVXTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_ttrQueue;
    NSUserDefaults *_ttrHistory;
    NSUUID *_requestID;
    NSString *_recognitionText;
    NSISO8601DateFormatter *_ttrTimeFormatter;
    NSString *_timeZone;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)setRecognitionText:(id)a0;
- (void)_fileRadar:(id)a0 extraContent:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_hasFileTTRWithIssue:(id)a0;
- (BOOL)_hasFileTTRWithRequestID:(id)a0;
- (void)_updateRequestID:(id)a0;
- (void)_updateTTRHistory:(id)a0;
- (void)createProblem:(id)a0 extraContent:(id)a1 completionHandler:(id /* block */)a2;
- (id)getDomainFatalIssueDialogIdentifiers;
- (id)getEarlyCutoffUtterances;
- (id)getRMVIssueDialogIdentifiers;
- (id)getRecognitionText;
- (id)getWebSearchIssueDialogIdentifiers;

@end
