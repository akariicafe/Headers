@class NSString, SKReceiptRefreshRequest, NFPendingPromise;

@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType>

@property (copy, nonatomic) NSString *restoreBundleID;
@property (retain, nonatomic) SKReceiptRefreshRequest *request;
@property (retain, nonatomic) NFPendingPromise *pendingPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
