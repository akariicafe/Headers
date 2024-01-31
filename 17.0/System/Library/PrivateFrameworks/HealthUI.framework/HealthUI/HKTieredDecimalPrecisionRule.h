@class NSString;

@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numberFormatter;
+ (id)percentageFormatter;

@end
