@class CDMDynamicConfig;

@interface CDMWarmupRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDynamicConfig:(id)a0;

@end
