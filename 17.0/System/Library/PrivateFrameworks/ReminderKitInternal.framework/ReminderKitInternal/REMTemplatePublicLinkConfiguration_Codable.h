@interface REMTemplatePublicLinkConfiguration_Codable : REMTemplatePublicLinkConfiguration

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithShouldIncludeHashtags:(BOOL)a0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(BOOL)a1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(BOOL)a2;

@end
