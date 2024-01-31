@class NSXPCListener, NSString;
@protocol MTSXPCListenerDelegate;

@interface MTSXPCListener : HMFObject <NSXPCListenerDelegate, MTSXPCListener>

@property (readonly) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<MTSXPCListenerDelegate> delegate;

@end
