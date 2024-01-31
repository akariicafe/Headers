@class NSArray, HKCategoryType;

@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (id)possibleStates;
- (BOOL)isHidden;
- (id)localizedLabel;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)updatePossibleStates;

@end
