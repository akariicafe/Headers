@class NSString;

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>

@property (nonatomic) long long decimalPrecision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)numberFormatter;
- (long long)maximumDecimalPrecision;
- (long long)decimalPrecisionForValue:(double)a0;
- (id)initWithDecimalPrecision:(long long)a0;
- (long long)minimumDecimalPrecision;

@end
