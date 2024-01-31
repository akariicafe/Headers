@interface PKPaymentApplicationExpressState : NSObject {
    void /* unknown type, empty encoding */ _isExpressEnabled;
    void /* unknown type, empty encoding */ _isPending;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ paymentApplication;
@property (nonatomic) BOOL isExpressEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaymentApplication:(id)a0;

@end
