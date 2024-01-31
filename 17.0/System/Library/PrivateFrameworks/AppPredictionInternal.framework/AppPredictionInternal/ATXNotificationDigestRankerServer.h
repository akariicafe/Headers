@class NSString, NSXPCListener;

@interface ATXNotificationDigestRankerServer : NSObject <ATXNotificationDigestRankerInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)generateDigestForAppGroupedNotificationStacks:(id)a0 maxGlobalMarqueeGroups:(unsigned long long)a1 maxAppMarqueeGroups:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)generateDigestForNotificationStacks:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;

@end
