@class NSArray, NSString, EKEventStore, NSMutableDictionary;
@protocol EKDiagnosticsCollectionDelegate;

@interface EKDiagnosticsCollector : NSObject <EKCancellableRemoteOperation> {
    EKEventStore *_store;
    int _token;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_files;
    BOOL _determinedOutputFiles;
    BOOL _finished;
}

@property (nonatomic) BOOL redactLogs;
@property (readonly, weak, nonatomic) id<EKDiagnosticsCollectionDelegate> delegate;
@property (readonly, nonatomic) NSArray *files;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnected;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelDiagnosticsCollection;
- (void)collectDiagnostics;
- (id)initWithEventStore:(id)a0 delegate:(id)a1;
- (void)receivedBatchResultsFromServer:(id)a0 finished:(BOOL)a1;

@end
