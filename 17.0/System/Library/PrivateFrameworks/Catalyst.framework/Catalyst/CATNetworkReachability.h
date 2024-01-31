@class CATAddress;
@protocol CATNetworkReachabilityDelegate;

@interface CATNetworkReachability : NSObject {
    struct __SCNetworkReachability { } *mReachabilityRef;
}

@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) CATAddress *address;
@property (weak, nonatomic) id<CATNetworkReachabilityDelegate> delegate;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(id)a0;
+ (BOOL)isReachableForNetworkWithFlags:(unsigned int)a0;
+ (BOOL)isReachableForLocalWiFiWithFlags:(unsigned int)a0;
+ (id)keyPathsForValuesAffectingReachable;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (id)debugDescription;
- (void)delegateDidChange;
- (void)reachabilityDidChangeWithFlags:(unsigned int)a0;
- (void)configureCallback;

@end
