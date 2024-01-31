@class LNDynamicOption;

@interface WFRemoteWidgetConfigurationDefaultLNOptionForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOption *defaultOption;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultOption:(id)a0 error:(id)a1;

@end
