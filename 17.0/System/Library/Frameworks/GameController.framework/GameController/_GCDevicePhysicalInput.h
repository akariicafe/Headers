@class _GCDevicePhysicalInputTransaction, NSMutableArray;

@interface _GCDevicePhysicalInput : _GCDevicePhysicalInputBase {
    id /* block */ _elementValueDidChangeHandler;
    id /* block */ _inputStateAvailableHandler;
    NSMutableArray *_allTransactions;
    _GCDevicePhysicalInputTransaction *_currentTransaction;
    _GCDevicePhysicalInputTransaction *_pendingTransaction;
    NSMutableArray *_bufferedTransactions;
    unsigned long long _bufferedTransactionsQueueDepth;
    _Atomic BOOL _isHandlingEvent;
}

- (void)dealloc;
- (void)setDevice:(id)a0;
- (void)setDataSource:(id)a0;
- (BOOL)isSnapshot;
- (id)physicalInput;
- (id)initWithFacade:(id)a0 elements:(id)a1;
- (id)initWithFacade:(id)a0 elements:(id)a1 attributes:(id)a2;
- (double)lastEventTimestamp;
- (id)popTransaction;
- (void)updateViewStateIfNeeded;

@end
