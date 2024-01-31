@class NSArray, NSString, WFAction;

@interface WFLightroomPresetPickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (readonly, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presetsByGroup;

- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;

@end
