@class NSObject;
@protocol OS_os_transaction;

@interface FigCaptureDeferredTransactionBroker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct _recursiveTransaction { NSObject<OS_os_transaction> *transaction; unsigned int opens; } _openTransactions[3];
}

- (id)init;
- (void)exitImmediately;
- (void)closeTransaction:(int)a0;
- (void)openTransaction:(int)a0;
- (void)openTransaction:(int)a0 pid:(int)a1;

@end
