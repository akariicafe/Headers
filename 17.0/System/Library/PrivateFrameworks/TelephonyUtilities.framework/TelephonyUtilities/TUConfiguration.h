@class NSString, NSURL, TUDelegateController;
@protocol TUKeyValueDataSource, TUMutableKeyValueDataSource;

@interface TUConfiguration : NSObject <TUConfiguration>

@property (readonly, nonatomic) TUDelegateController *delegateController;
@property (nonatomic) unsigned long long announceCalls;
@property (retain, nonatomic) NSString *conversationLinkBaseURLString;
@property (retain, nonatomic) NSURL *conversationLinkBaseURL;
@property (nonatomic) BOOL simulateFatalPersistentStoreError;
@property (nonatomic) BOOL simulateInternationalCall;
@property (readonly, nonatomic) id<TUKeyValueDataSource, TUMutableKeyValueDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (id)numberForKey:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;

@end
