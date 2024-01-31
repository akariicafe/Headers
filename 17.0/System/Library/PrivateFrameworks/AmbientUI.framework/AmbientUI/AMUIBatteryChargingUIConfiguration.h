@interface AMUIBatteryChargingUIConfiguration : NSObject

@property (nonatomic) double ringDiameter;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGSize { double width; double height; } boltSize;
@property (readonly, nonatomic) double chargingTextFontSize;
@property (readonly, nonatomic) BOOL staticViewNeeded;

+ (id)defaultConfiguration;

- (id)initWithRingDiameter:(double)a0 lineWidth:(double)a1 boltSize:(struct CGSize { double x0; double x1; })a2 chargingTextFontSize:(double)a3;

@end
