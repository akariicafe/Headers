@class NSString;

@interface HealthExperienceUI.ChartContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ preferredOverlayRawValue;
    void /* unknown type, empty encoding */ trendActiveRawValue;
    void /* unknown type, empty encoding */ chartOptionsRawValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
