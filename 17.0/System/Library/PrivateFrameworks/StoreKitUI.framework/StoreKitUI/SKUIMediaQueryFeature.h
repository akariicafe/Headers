@class NSString, NSArray;

@interface SKUIMediaQueryFeature : NSObject

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSArray *notificationNames;
@property (readonly, nonatomic) NSArray *requiredKeys;

+ (BOOL)supportsFeatureName:(id)a0;

- (void).cxx_destruct;
- (BOOL)evaluateWithValues:(id)a0;
- (id)initWithFeatureName:(id)a0 value:(id)a1;

@end
