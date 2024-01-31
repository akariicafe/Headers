@class NSString, NSMapTable;

@interface SBPIPCompoundAssertion : NSObject {
    NSMapTable *_controllerToStashAssertionMap;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long reason;

- (void)dealloc;
- (void)addAssertionForController:(id)a0 windowScene:(id)a1;
- (void)invalidate;
- (void)removeAssertionForController:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 reason:(long long)a1;

@end
