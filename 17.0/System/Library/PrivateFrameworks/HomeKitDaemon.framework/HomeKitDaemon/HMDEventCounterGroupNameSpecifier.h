@class NSString;

@interface HMDEventCounterGroupNameSpecifier : NSObject <HMDEventCounterGroupSpecifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithGroupName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupName:(id)a0;
- (BOOL)isEqualToGroupNameSpecifier:(id)a0;

@end
