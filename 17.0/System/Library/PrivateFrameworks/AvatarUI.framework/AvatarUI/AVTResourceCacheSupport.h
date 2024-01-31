@interface AVTResourceCacheSupport : NSObject

+ (id /* block */)resourceFromCache:(id)a0 forItem:(id)a1 scope:(id)a2 preflightCacheMissHandler:(id /* block */)a3 cacheMissHandler:(id /* block */)a4 cacheMissQueue:(id)a5 taskScheduler:(id)a6 callbackQueue:(id)a7 resourceHandler:(id /* block */)a8;
+ (id /* block */)resourceFromCache:(id)a0 forItem:(id)a1 scope:(id)a2 preflightCacheMissHandler:(id /* block */)a3 cacheMissWithCompletionHandler:(id /* block */)a4 cacheMissQueue:(id)a5 taskScheduler:(id)a6 callbackQueue:(id)a7 resourceHandler:(id /* block */)a8;

@end
