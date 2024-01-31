@class NSMutableArray;

@interface IDSTransactionQueue : NSObject

@property (retain, nonatomic) NSMutableArray *transactions;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)init;
- (void)appendItem:(id)a0;
- (void).cxx_destruct;
- (void)_appendTransaction:(id)a0;
- (void)_prependTransaction:(id)a0;
- (void)_readyTransaction:(id)a0;
- (void)_removeTransaction:(id)a0;
- (id /* block */)appendPendingItem:(id)a0;
- (void)executeReadyItemsWithBlock:(id /* block */)a0;
- (void)prependItem:(id)a0;

@end
