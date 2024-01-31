@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject

@property (readonly, copy, nonatomic) INIntent *intent;

- (void).cxx_destruct;
- (BOOL)isExpectedDefaultValueError:(id)a0;
- (void)loadDefaultValuesWithAttributes:(id)a0 extensionProxy:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithIntent:(id)a0;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)a0;

@end
