@class NSString, NSObject;
@protocol OS_os_transaction;

@interface WLKTransactionScope : NSObject

@property (readonly) NSObject<OS_os_transaction> *transaction;
@property (readonly, copy) NSString *identifier;
@property (readonly) double delay;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 delay:(double)a1;
- (void).cxx_destruct;

@end
