@class NSString, NSXPCListener;

@interface ATXAppDirectoryServer : NSObject <NSXPCListenerDelegate, ATXAppDirectoryInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)categoriesWithReply:(id /* block */)a0;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)requestNotificationWhenCategoriesAreReady;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyBookmarksDidChange;
- (void).cxx_destruct;

@end
