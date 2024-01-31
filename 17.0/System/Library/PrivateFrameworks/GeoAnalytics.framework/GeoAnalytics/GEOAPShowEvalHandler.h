@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface GEOAPShowEvalHandler : NSObject <GEOAPXPCClientExporting> {
    NSXPCConnection *_xpcConn;
    id /* block */ _visitorBlock;
    NSObject<OS_dispatch_semaphore> *_wait;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
