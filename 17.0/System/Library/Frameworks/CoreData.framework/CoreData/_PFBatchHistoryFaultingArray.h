@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (id)transaction;
- (Class)classForCoder;
- (void)_setTransaction:(id)a0;
- (id)initWithPFBatchFaultingArray:(id)a0;

@end
