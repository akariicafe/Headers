@class NSString, NSNumber;

@interface AMSUIWebRestrictedFeatureAction : AMSUIWebAction

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *enabled;

- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
