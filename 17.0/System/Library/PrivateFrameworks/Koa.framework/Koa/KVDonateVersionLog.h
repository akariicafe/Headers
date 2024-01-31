@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface KVDonateVersionLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_log;
    NSURL *_logFileURL;
}

- (id)init;
- (unsigned long long)incrementVersionForItemType:(long long)a0 originAppId:(id)a1 deviceId:(id)a2 userId:(id)a3;
- (id)initWithQueue:(id)a0 directoryPath:(id)a1;
- (void).cxx_destruct;

@end
