@class NSString, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface NPKOSTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)transactionWithName:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)_initWithName:(id)a0;
- (void).cxx_destruct;

@end
