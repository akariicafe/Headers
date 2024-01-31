@protocol NSSecureCoding;

@interface WFRemoteWidgetConfigurationDefaultValueForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) id<NSSecureCoding> defaultValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultValue:(id)a0 error:(id)a1;

@end
