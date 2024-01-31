@class NSString;

@interface MobileTimerSupport.AlarmContext : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ alarmId;
    void /* unknown type, empty encoding */ hour;
    void /* unknown type, empty encoding */ min;
    void /* unknown type, empty encoding */ isSnoozed;
    void /* unknown type, empty encoding */ isFiring;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 alarmId:(id)a1 hour:(unsigned long long)a2 min:(unsigned long long)a3 isSnoozed:(BOOL)a4 isFiring:(BOOL)a5;

@end
