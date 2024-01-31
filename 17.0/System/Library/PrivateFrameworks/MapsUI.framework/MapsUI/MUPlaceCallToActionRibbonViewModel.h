@class MUPlaceCallToActionAppearance, MUPlaceRibbonItemViewModel;

@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
}

@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (void)_updateInternalState;
- (id)initWithSubmissionStatus:(id)a0;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
