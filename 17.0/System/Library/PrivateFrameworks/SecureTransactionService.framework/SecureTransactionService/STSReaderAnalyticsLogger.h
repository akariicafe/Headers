@class NSObject;
@protocol OS_dispatch_queue;

@interface STSReaderAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCALogger;

- (id)init;
- (void).cxx_destruct;
- (void)_postReaderSessionEvent:(id)a0;
- (void)_postReaderTransactionEvent:(id)a0 prepOnly:(BOOL)a1;
- (void)postReaderSessionEvent:(id)a0;
- (void)postReaderTransactionEvent:(id)a0 prepOnly:(BOOL)a1;

@end
