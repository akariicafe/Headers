@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (id)init;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (void)removeCancelToken:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)removeAllCancelTokens;

@end
