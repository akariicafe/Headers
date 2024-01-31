@class NSNumber;

@interface HDMCWatchSettingValues : NSObject

@property (readonly, copy, nonatomic) NSNumber *featureSettingEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *defaultsEnabledValue;
@property (readonly, copy, nonatomic) NSNumber *lastReconciledEnabledValue;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeatureSettingEnabledValue:(id)a0 defaultsEnabledValue:(id)a1 lastReconciledEnabledValue:(id)a2;
- (id)reconciledEnabledValue;

@end
