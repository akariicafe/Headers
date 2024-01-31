@class NSString;

@interface AXAssertion : NSObject

@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain, nonatomic) NSString *assertionType;
@property (retain, nonatomic) NSString *identifier;

+ (id)assertionWithType:(id)a0 identifier:(id)a1;
+ (void)ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)initWithType:(id)a0 identifier:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_hasValidAssertionType;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;

@end
