@class NSString, NFDCKAssertion;

@interface STSDCKAssertion : NSObject

@property (readonly, nonatomic) NFDCKAssertion *assertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAssertion:(id)a0;

@end
