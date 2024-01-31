@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject {
    NSString *_identifier;
    unsigned long long _transactionID;
}

@property (weak, nonatomic) id<BBAssertionDelegate> delegate;

- (unsigned long long)transactionID;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 identifier:(id)a1;
- (id)identifier;
- (void).cxx_destruct;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)a0;

@end
