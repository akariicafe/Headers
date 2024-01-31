@class NSUnit;

@interface PPSUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)celsius;
+ (id)seconds;
+ (id)grams;
+ (id)microseconds;
+ (id)volts;
+ (id)dimensionless;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)microWattHours;
+ (id)milliAmpereHours;
+ (id)milliAmperes;
+ (id)milliVolts;
+ (id)unitWithJSONObject:(id)a0;
+ (id)unitWithProto:(id)a0;

- (id)proto;
- (id)json;
- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;

@end
