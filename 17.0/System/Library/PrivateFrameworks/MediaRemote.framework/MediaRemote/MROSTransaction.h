@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> *_containedTransaction;
}

@property (readonly, nonatomic) NSString *transactionName;

- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)invalidateTransaction;

@end
