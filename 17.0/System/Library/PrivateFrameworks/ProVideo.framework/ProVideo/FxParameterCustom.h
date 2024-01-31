@interface FxParameterCustom : FxPinParameter <FxCustomParameterDefinition> {
    struct FxParameterCustomPriv { } *_customPriv;
}

- (id)init;
- (void)dealloc;
- (id)dataFromValue:(id)a0;
- (id)valueFromData:(id)a0;

@end
