@class INObjectCollection;

@interface WFRemoteWidgetConfigurationOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) INObjectCollection *options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0 error:(id)a1;

@end
