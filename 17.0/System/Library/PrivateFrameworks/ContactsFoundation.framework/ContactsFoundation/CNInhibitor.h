@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor>

@property (nonatomic) BOOL debugIsInhibiting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_transactionInhibitorWithLabel:(id)a0;
+ (id)runningboardInhibitorWithExplanation:(id)a0;
+ (id)suddenTerminationInhibitor;
+ (id)suddenTerminationInhibitorWithProcessInfo:(id)a0;

- (void)dealloc;
- (void)start;
- (void)stop;

@end
