@class NSString, PRSServerPosterPath;

@interface PRUIModalEntryPointAmbientEditingSwitcherWithActiveConfiguration : NSObject <PRUIModalEntryPoint>

@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActiveConfiguration:(id)a0;

@end
