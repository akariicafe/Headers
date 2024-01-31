@class NSString, NSTimer, NSDate, MTTimerManager;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic) id<CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *timerText;

- (BOOL)isTimerActive;
- (void)dealloc;
- (id)timerView;
- (void)_stopTimerNotifyingDelegate:(BOOL)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateNextTimer;
- (void)_updateTimerFired;
- (void)_nextTimerChanged:(id)a0;
- (void).cxx_destruct;
- (void)_updateTimerLabelView;
- (void)_stopTimer;
- (BOOL)isEndDateValid;
- (void)setEndDate:(id)a0;
- (void)_startTimer;

@end
