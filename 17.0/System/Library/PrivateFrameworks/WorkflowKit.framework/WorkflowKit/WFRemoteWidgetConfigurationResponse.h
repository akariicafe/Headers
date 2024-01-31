@class NSError;

@interface WFRemoteWidgetConfigurationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;

+ (id)fromSecureData:(id)a0;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)secureData;

@end
