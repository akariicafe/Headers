@class NSString, NSDate, NSNumber, TRIBMLTDeployment;
@protocol TRIFactorPackSetId;

@interface TRIPartialBMLTRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
@property (readonly, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *namespace;

+ (id)recordWithBmltDeployment:(id)a0 pluginId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 endDate:(id)a7 namespace:(id)a8;

- (id)copyWithReplacementStatus:(long long)a0;
- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementActiveFactorPackSetId:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementBmltDeployment:(id)a0;
- (id)copyWithReplacementNamespace:(id)a0;
- (id)copyWithReplacementPluginId:(id)a0;
- (id)initWithBmltDeployment:(id)a0 pluginId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 endDate:(id)a7 namespace:(id)a8;

@end
