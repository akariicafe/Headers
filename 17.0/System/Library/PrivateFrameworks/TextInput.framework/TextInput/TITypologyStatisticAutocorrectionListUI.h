@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic {
    BOOL _didSetListUIDisplayed;
    BOOL _listUIDisplayed;
}

@property (readonly, nonatomic) long long inputsWhileHidden;
@property (readonly, nonatomic) long long inputsWhileDisplayed;
@property (readonly, nonatomic) long long hiddenToDisplayed;
@property (readonly, nonatomic) long long displayedToHidden;

- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (void)visitRecordSync:(id)a0;
- (void)addInputCount;
- (void)setListUIDisplayed:(BOOL)a0;
- (void)visitRecordAutocorrections:(id)a0;

@end
