@class NSMutableDictionary, VUIAppContext;

@interface VUIJSObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *managedProperties;
@property (readonly, weak, nonatomic) VUIAppContext *appContext;

- (id)init;
- (void).cxx_destruct;
- (id)invokeMethod:(id)a0 withArguments:(id)a1;
- (id)initWithAppContext:(id)a0;
- (id)jsValueForProperty:(id)a0;
- (void)setJSValue:(id)a0 forProperty:(id)a1;

@end
