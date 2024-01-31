@class NSMutableDictionary, NSXPCConnection, NSDictionary, CRXUNetworkReachability, NSObject;
@protocol OS_os_log;

@interface CRXFCalibrationDataDownloader : NSObject {
    NSObject<OS_os_log> *_log;
    double _timeout;
    NSMutableDictionary *_downloads;
    NSXPCConnection *_connection;
    unsigned long long _nextDownloadID;
    NSDictionary *_fetchOptions;
    CRXUNetworkReachability *_networkReachability;
}

- (void)tearDown;
- (void).cxx_destruct;
- (unsigned long long)addDownloadWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)downloadACCsForSerialNumbers:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)downloadCalibrationDataForACCPayload:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)downloadCalibrationDataForASAKey:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchUserInfoWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)finishDownloadWithID:(unsigned long long)a0 data:(id)a1 error:(id)a2;
- (id)initWithServer:(unsigned long long)a0 serverVersion:(id)a1 timeout:(double)a2;

@end
