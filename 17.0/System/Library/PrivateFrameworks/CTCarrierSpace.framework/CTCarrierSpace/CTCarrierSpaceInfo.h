@class CTCarrierSpaceAppsInfo, CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo;
@property (retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo;
@property (retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
