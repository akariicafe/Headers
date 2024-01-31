@class NSString, NSXPCListener;

@interface ATStatusObserverListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
