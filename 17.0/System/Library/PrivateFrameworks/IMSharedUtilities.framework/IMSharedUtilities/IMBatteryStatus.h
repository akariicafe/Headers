@protocol IMBatteryStatusTestDelegate;

@interface IMBatteryStatus : NSObject

@property (weak, nonatomic) id<IMBatteryStatusTestDelegate> testDelegate;
@property (readonly, getter=isCharging) BOOL charging;

- (void).cxx_destruct;

@end
