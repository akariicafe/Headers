@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject

@property (retain, nonatomic) FMFMapCache *mapCache;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)newConnection;

- (void).cxx_destruct;
- (void)gridImageForScreenRatio:(double)a0 andCompletion:(id /* block */)a1;
- (void)gridImageForWidth:(double)a0 height:(double)a1 cache:(BOOL)a2 andCompletion:(id /* block */)a3;
- (void)mapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 screenRatio:(double)a3 andCompletion:(id /* block */)a4;
- (void)mapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 height:(double)a4 cache:(BOOL)a5 andCompletion:(id /* block */)a6;
- (void)mapImageForLocation:(id)a0 isShifted:(BOOL)a1 altitude:(double)a2 pitch:(double)a3 screenRatio:(double)a4 andCompletion:(id /* block */)a5;
- (void)mapImageForLocation:(id)a0 isShifted:(BOOL)a1 altitude:(double)a2 pitch:(double)a3 width:(double)a4 height:(double)a5 cache:(BOOL)a6 andCompletion:(id /* block */)a7;
- (void)mapImageForLocation:(id)a0 isShifted:(BOOL)a1 radius:(double)a2 width:(double)a3 height:(double)a4 cache:(BOOL)a5 andCompletion:(id /* block */)a6;
- (void)mapImageForLocation:(id)a0 radius:(double)a1 width:(double)a2 height:(double)a3 cache:(BOOL)a4 andCompletion:(id /* block */)a5;
- (void)mapImageForRequest:(id)a0 andCompletion:(id /* block */)a1;
- (void)noLocationImageForScreenRatio:(double)a0 andCompletion:(id /* block */)a1;
- (void)noLocationImageForWidth:(double)a0 height:(double)a1 cache:(BOOL)a2 andCompletion:(id /* block */)a3;

@end
