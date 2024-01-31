@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (BOOL)isExpiredNow;
- (double)currentDoseFor:(id)a0;
- (void)closePermanently;
- (void)dealloc;
- (void)_readCacheAndExpiration;
- (void)_overwrite;
- (id)_getCacheFromFile;
- (void).cxx_destruct;
- (BOOL)isExpiredAt:(id)a0;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (void)_openFd;

@end
