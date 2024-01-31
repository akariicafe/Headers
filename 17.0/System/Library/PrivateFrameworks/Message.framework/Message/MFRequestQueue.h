@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MFRequestQueue : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *requestPairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (unsigned long long)signpostID;
- (id)init;
- (BOOL)addRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)processRequest:(id)a0;
- (BOOL)_processRequests:(id)a0;
- (BOOL)addRequests:(id)a0;
- (BOOL)addRequests:(id)a0 combine:(BOOL)a1;
- (BOOL)processRequests:(id)a0;
- (BOOL)sendRequests:(id)a0;

@end
