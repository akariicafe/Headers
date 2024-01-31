@class NSString, TMLBinding;

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler <TMLBinder> {
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
- (id)initWithBlock:(id /* block */)a0 binding:(id)a1;

@end
