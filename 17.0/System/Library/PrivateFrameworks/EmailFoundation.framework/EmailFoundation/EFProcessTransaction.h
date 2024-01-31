@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)transactionWithDescription:(id)a0;

- (void)invalidate;
- (id)description;
- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (BOOL)extend;

@end
