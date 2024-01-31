@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject

@property (readonly, nonatomic) long long localWeightUnit;
@property (retain, nonatomic) NSMassFormatter *massFormatter;

+ (id)sharedFormatter;

- (id)init;
- (void)_localeChanged:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)stringFromWeightInKilograms:(id)a0;
- (void)_updateRoundingIncrement;
- (id)stringFromWeightValue:(double)a0 inUnit:(long long)a1;

@end
