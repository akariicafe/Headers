@class NSString, TMLBinding;

@interface TMLPropertyChangedScriptSignalHandler : TMLScriptSignalHandler <TMLBinder> {
    TMLBinding *_binding;
}

@property (readonly, nonatomic) long long bindingOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attach;
- (void)detach;
- (void).cxx_destruct;
- (void)bindingValueChanged:(id)a0;
- (id)initWithFunctionName:(id)a0 context:(id)a1 binding:(id)a2;

@end
