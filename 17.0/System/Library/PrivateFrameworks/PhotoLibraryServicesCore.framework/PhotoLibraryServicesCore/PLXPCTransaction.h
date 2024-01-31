@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)_stopTrackingTransaction:(id)a0;
+ (void)initialize;
+ (id)transaction:(const char *)a0;
+ (id)openXPCTransactionStatus;
+ (void)_startTrackingTransaction:(id)a0;

- (id)initWithIdentifier:(const char *)a0;
- (void)dealloc;
- (id)_statusDescription;
- (id)description;
- (void).cxx_destruct;
- (void)stillAlive;

@end
