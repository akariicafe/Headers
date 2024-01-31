@protocol CRKCancelable;

@interface CRKCancelableBackedCatalystIDSSubscription : NSObject <CATIDSSubscription>

@property (readonly, nonatomic) id<CRKCancelable> cancelable;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancelable:(id)a0;

@end
