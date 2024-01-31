@class SESDCKAssertion, NSString;

@interface NFDCKAssertion : NSObject

@property (readonly, nonatomic) SESDCKAssertion *sesAssertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSESAssertion:(id)a0;

@end
