@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BKSSystemShellControlService : NSObject <BKSSystemShellControlClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
