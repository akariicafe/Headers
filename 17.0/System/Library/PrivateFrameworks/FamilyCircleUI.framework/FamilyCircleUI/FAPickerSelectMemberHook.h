@interface FAPickerSelectMemberHook : NSObject <RUIServerHook> {
    void /* unknown type, empty encoding */ activateAction;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) id /* block */ activateAction;

- (id)init;
- (void).cxx_destruct;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;

@end
