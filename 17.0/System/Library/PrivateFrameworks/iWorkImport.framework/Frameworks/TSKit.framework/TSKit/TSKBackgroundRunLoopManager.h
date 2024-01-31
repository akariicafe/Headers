@class NSHashTable, NSObject, TSKRunLoopTicket;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TSKBackgroundRunLoopManager : NSObject {
    NSObject<OS_dispatch_group> *_startingRunLoopGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_requestSerializationQueue;
    NSHashTable *_activeTickets;
    TSKRunLoopTicket *_mainRunLoopTicket;
    TSKRunLoopTicket *_startingTicket;
}

@property (class, readonly) TSKBackgroundRunLoopManager *sharedManager;

- (id)initSingleton;
- (void).cxx_destruct;
- (void)startRunLoop;
- (id)runLoopTicketForManagedRunLoop:(struct __CFRunLoop { } *)a0;
- (BOOL)isManagedRunLoop:(struct __CFRunLoop { } *)a0;
- (struct __CFRunLoop { } *)runLoopForTicket:(id)a0;
- (id)runLoopTicketWithQualityOfService:(long long)a0;
- (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)threadIdForTicket:(id)a0;

@end
