@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject

@property (retain, nonatomic) JSManagedValue *managedValue;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)value;
- (id)initWithListener:(id)a0 forNode:(id)a1;

@end
