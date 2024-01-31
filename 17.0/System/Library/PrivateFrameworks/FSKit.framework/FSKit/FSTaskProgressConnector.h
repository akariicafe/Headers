@class NSXPCListener, NSXPCListenerEndpoint, NSProgress, NSMutableSet, FSTaskDescription, NSString;

@interface FSTaskProgressConnector : NSObject <FSTaskProgressXPC, NSXPCListenerDelegate>

@property (retain) NSXPCListener *listener;
@property (retain) NSProgress *progress;
@property (copy) FSTaskDescription *taskDesc;
@property (retain) NSMutableSet *pendingReplyBlocks;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newForProgress:(id)a0 description:(id)a1;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)getProgress:(id /* block */)a0;
- (id)initWithProgress:(id)a0 description:(id)a1;

@end
