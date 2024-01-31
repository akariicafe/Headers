@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ANXPCTransactionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *transactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSArray *activeTransactions;

+ (id)sharedManager;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_overview;
- (unsigned long long)_currentStatus;
- (void)_removeTransaction:(id)a0;
- (void)_cancelTimer:(id)a0;
- (id)transaction:(id)a0 forEndpointUUID:(id)a1;
- (void)transaction:(id)a0 setActive:(BOOL)a1;
- (void)transaction:(id)a0 setActiveForTimeInterval:(double)a1;
- (id)_createTransaction:(id)a0;
- (void)_createTransaction:(id)a0 expiration:(double)a1;
- (void)_resetTimer:(id)a0 expiration:(double)a1;
- (void)_startTimer:(id)a0 expiration:(double)a1;
- (void)_transaction:(id)a0 setActive:(BOOL)a1;
- (void)_transaction:(id)a0 setActiveForTimeInterval:(double)a1;

@end
