@class NSNumber;

@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (copy, nonatomic) NSNumber *applicationConfigurationType;
@property (copy, nonatomic) NSNumber *senderConfigurationType;
@property (copy, nonatomic) NSNumber *suppressionType;
@property (copy, nonatomic) NSNumber *suppressionMode;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSNumber *hideApplicationBadges;
@property (copy, nonatomic) NSNumber *compatibilityVersion;

- (void)setSuppressionType:(id)a0;
- (void)setCompatibilityVersion:(id)a0;
- (void)setSuppressionMode:(id)a0;
- (void)setHideApplicationBadges:(id)a0;
- (void)setApplicationConfigurationType:(id)a0;
- (void)setMinimumBreakthroughUrgency:(id)a0;
- (void)setSenderConfigurationType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
