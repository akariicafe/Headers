@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *targetContext;
@property (nonatomic) long long joinType;
@property (nonatomic) BOOL ignoreCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringValue;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)key;
- (unsigned long long)unsignedIntegerValue;
- (void).cxx_destruct;
- (void)cancel;
- (id)value;
- (id)arrayValue;
- (void)validateWithCompletion:(id /* block */)a0;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (id)initWithTargetContext:(id)a0;

@end
