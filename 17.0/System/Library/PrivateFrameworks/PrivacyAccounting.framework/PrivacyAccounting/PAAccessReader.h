@class NSArray, PAAccessReaderSandboxExtension, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, PAAccessReaderDelegate;

@interface PAAccessReader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _enabledState;
    PAAccessReaderSandboxExtension *_sandboxExtension;
    NSArray *_streams;
    int _enablementChangedNotificationToken;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL loggingEnabled;
@property (weak) id<PAAccessReaderDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)exportFromPublisher:(id)a0 toStream:(id)a1 error:(id *)a2;
+ (BOOL)exportFromPublisher:(id)a0 toStream:(id)a1 withCancellationToken:(id)a2 error:(id *)a3;
+ (id)fileNameForExport;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0 queue:(id)a1 enablementChangedNotificationName:(id)a2;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (void)lockedNotifyDidSetLoggingEnabled:(BOOL)a0;
- (id)publisherForAll;
- (void)handleEnabledChangeNotification;
- (void)exportToFileHandle:(id)a0 completion:(id /* block */)a1;
- (id)getOrCreateStreamsWithError:(id *)a0;
- (void)lockedAssertValidEnabledState;
- (BOOL)lockedEnsureSandboxExtensionWithError:(id *)a0;
- (void)lockedSetEnabledStateForLoggingEnabled:(BOOL)a0;
- (id)publisherForAllSince:(double)a0 error:(id *)a1;
- (id)publisherForAllSince:(id)a0 until:(id)a1 reversed:(BOOL)a2 error:(id *)a3;
- (id)publisherForReportWithError:(id *)a0;
- (id)requestSandboxExtensionWithError:(id *)a0;
- (void)setEnabledStateForLoggingEnabled:(BOOL)a0;

@end
