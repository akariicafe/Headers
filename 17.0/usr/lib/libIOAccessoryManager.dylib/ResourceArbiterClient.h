@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ResourceArbiterClient : BaseResourceArbiterClient {
    unsigned int _ioConnect;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    NSObject<OS_dispatch_queue> *_notificationPortQueue;
}

@property (readonly, nonatomic) unsigned int ioService;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) int pendingResourceRequest;
@property (readonly, nonatomic) BOOL resourceAccessStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *sema;

- (void)dealloc;
- (void)_processResourceAccessStatus:(BOOL)a0;
- (void)resourceAccessRevoked;
- (id)initWithID:(int)a0;
- (void)releaseResourceAccess;
- (void)resourceAccessGranted;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (BOOL)synchRequestResourceAccess;

@end
