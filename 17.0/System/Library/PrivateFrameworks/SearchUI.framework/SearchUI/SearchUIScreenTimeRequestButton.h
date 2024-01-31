@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)dealloc;
- (void)setupSubscription;
- (void).cxx_destruct;
- (id)requestIdentifier;
- (unsigned long long)type;
- (int)getRequestState;

@end
