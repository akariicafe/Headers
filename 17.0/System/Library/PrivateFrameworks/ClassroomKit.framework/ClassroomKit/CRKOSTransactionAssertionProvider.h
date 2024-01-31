@class NSString;
@protocol CRKOSTransactionPrimitives;

@interface CRKOSTransactionAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) id<CRKOSTransactionPrimitives> primitives;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)initWithReverseDNSReason:(id)a0 primitives:(id)a1;

@end
