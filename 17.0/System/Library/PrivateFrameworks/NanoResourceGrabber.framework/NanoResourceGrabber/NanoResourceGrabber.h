@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NanoResourceGrabber : NSObject

@property (retain, nonatomic) NSXPCConnection *nrgdConnection;
@property BOOL connectionMayBeValid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iconCacheQueue;

+ (id)sharedInstance;
+ (id)nrgIconVariants;
+ (id)_iconVariant:(int)a0 fromURL:(id)a1;
+ (id)liIconVariants;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getIconForBundleID:(id)a0 iconVariant:(int)a1 block:(id /* block */)a2 timeout:(double)a3;
- (id)connectToService;
- (void)getAppViewListImage:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_getCachedIconForBundleID:(id)a0 iconVariant:(int)a1;
- (void)_getPhoneIconForBundleID:(id)a0 iconVariant:(int)a1 timeout:(double)a2 block:(id /* block */)a3;
- (void)_getPhoneLocalIconForBundleID:(id)a0 iconVariant:(int)a1 block:(id /* block */)a2;
- (void)_getRemoteIconForBundleIDBypassingCache:(id)a0 iconVariant:(int)a1 block:(id /* block */)a2 timeout:(double)a3;
- (void)_setCachedIcon:(id)a0 forIconVariant:(int)a1 inBundleID:(id)a2;
- (void)getCachedIconForBundleID:(id)a0 iconVariant:(int)a1 outIconImage:(id *)a2 queue:(id)a3 updateBlock:(id /* block */)a4 timeout:(double)a5;
- (void)getCachedIconForBundleID:(id)a0 iconVariant:(int)a1 outIconImage:(id *)a2 updateBlock:(id /* block */)a3;
- (void)getIconForBundleID:(id)a0 iconVariant:(int)a1 queue:(id)a2 block:(id /* block */)a3 timeout:(double)a4;

@end
