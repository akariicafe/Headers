@class NSNumber;

@interface AMSUIWebWalletPassAction : AMSUIWebAction

@property (nonatomic) BOOL attemptLynxProvisioning;
@property (retain, nonatomic) NSNumber *lookupFeature;

- (void).cxx_destruct;
- (id)_attemptLynxProvisioning;
- (id)_lookupPassForIdentifier:(unsigned long long)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
