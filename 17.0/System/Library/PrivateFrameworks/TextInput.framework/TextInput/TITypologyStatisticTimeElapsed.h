@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

@property (retain, nonatomic) TITypologyTimer *timer;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double adjustedElapsedTime;

- (id)aggregateReport;
- (id)init;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (void).cxx_destruct;

@end
