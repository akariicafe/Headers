@class NSObject;
@protocol OS_dispatch_queue;

@interface OS_remote_listening_service : NSObject {
    const char *service_name;
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ accept_block;
    OS_remote_listening_service *next;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
