@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) INIntentSlotDescription *slotDescription;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)alwaysShowsButton;
- (Class)singleStateClass;

@end
