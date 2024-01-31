@class HKSharedSummaryTransaction, NSString, NSSet;

@interface HDSharedSummaryQueryServer : HDQueryServer {
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
    NSSet *_includedIdentifiers;
    NSSet *_includedObjectTypes;
}

+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;

@end
