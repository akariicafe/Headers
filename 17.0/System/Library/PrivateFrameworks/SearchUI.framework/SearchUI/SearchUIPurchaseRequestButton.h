@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)dealloc;
- (void)setupSubscription;
- (void).cxx_destruct;
- (id)requestIdentifier;
- (unsigned long long)type;
- (int)getRequestState;

@end
