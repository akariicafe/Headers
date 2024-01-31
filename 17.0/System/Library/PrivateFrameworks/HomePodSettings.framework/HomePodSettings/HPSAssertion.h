@class NSString;

@interface HPSAssertion : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ assertionContext;
    void /* unknown type, empty encoding */ connectionProvider;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ assertionInvalidationHandler;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void)invalidate;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 assertionType:(unsigned long long)a1 connectionProvider:(id)a2;

@end
