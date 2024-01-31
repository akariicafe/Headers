@class NSString;

@interface HMDCompositeSettingIntegerConstraint : NSObject <HMDCompositeSettingConstraint>

@property (readonly) long long min;
@property (readonly) long long max;
@property (readonly) long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)initWithMaxValue:(long long)a0 minValue:(long long)a1 stepValue:(long long)a2;

@end
