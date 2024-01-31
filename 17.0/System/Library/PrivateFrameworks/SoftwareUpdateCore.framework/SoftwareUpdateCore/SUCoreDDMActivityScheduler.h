@class NSTimer, NSDictionary, NSDate;
@protocol SUCoreDDMActivitySchedulerDelegate;

@interface SUCoreDDMActivityScheduler : NSObject

@property (retain, nonatomic) id<SUCoreDDMActivitySchedulerDelegate> delegate;
@property (retain, nonatomic) NSDate *fireDate;
@property (nonatomic) BOOL isArmed;
@property (retain) NSTimer *timer;
@property (retain, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (void)_handleTimerFired:(id)a0;
- (BOOL)armActivitySchedulerWithDate:(id)a0;
- (BOOL)armActivitySchedulerWithDate:(id)a0 options:(id)a1;
- (void)disarmActivityScheduler;
- (id)initWithDelegate:(id)a0 options:(id)a1;

@end
