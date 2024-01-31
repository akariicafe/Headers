@interface UIDictationTipPresentationHandler : NSObject

@property (nonatomic) long long dictationTipSignaled;
@property (nonatomic) BOOL tipPresentedInCurrentDictationSession;
@property (nonatomic) BOOL isShowingTip;

- (id)init;
- (long long)dictationTipDisplayCount:(long long)a0;
- (BOOL)tipShownLastWeek;
- (void)resetHandler;
- (void)resetDictationTipSignal;
- (BOOL)dictationTipShownOverLimit:(long long)a0;
- (BOOL)shouldSignalDictationTip:(long long)a0;
- (void)signalTipPresentedInCurrentDictationSession;
- (long long)getDictationTipSignaled;
- (BOOL)dictationCommandTipsEnabled;

@end
