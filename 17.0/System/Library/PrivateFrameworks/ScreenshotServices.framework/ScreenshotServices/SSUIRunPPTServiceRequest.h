@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) unsigned long long numberOfRequiredScreenshots;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entitlement;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
