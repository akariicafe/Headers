@class NSString;

@interface MobileTimerSupport.TimerContext : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ timerId;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ remainingTime;
    void /* unknown type, empty encoding */ firedDate;
    void /* unknown type, empty encoding */ fireDate;
    void /* unknown type, empty encoding */ dismissedDate;
    void /* unknown type, empty encoding */ firing;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 timerId:(id)a1 duration:(double)a2 remainingTime:(double)a3 firing:(BOOL)a4 fireDate:(id)a5 title:(id)a6;

@end
