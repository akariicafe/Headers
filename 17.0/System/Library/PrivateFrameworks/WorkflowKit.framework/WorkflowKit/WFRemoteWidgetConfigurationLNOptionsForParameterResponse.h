@class LNDynamicOptionsResult;

@interface WFRemoteWidgetConfigurationLNOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOptionsResult *result;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithResult:(id)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
