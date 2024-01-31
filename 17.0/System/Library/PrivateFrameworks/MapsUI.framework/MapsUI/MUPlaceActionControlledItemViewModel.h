@class _MKPlaceActionButtonController;

@interface MUPlaceActionControlledItemViewModel : MUActionRowItemViewModel {
    _MKPlaceActionButtonController *_actionButtonController;
}

- (id)titleText;
- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)performWithPresentationOptions:(id)a0;
- (id)analyticsButtonValues;
- (id)initWithPlaceActionController:(id)a0;

@end
