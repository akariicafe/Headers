@class NSMutableDictionary;

@interface VSJSEventTargetObject : VSJSObject <VSJSEventTargetObject>

@property (retain, nonatomic) NSMutableDictionary *listeners;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_indexForListener:(id)a0 withEventType:(id)a1;
- (void)addEventListener:(id)a0 :(id)a1 :(id)a2;
- (void)dispatchEvent:(id)a0 withInfo:(id)a1;
- (void)removeEventListener:(id)a0 :(id)a1;

@end
