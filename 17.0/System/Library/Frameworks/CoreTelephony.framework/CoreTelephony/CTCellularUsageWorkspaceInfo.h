@class NSNumber, NSString, NSDate;

@interface CTCellularUsageWorkspaceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *subscriberTag;
@property (readonly, nonatomic) NSNumber *metaDataForHomeCountry;
@property (readonly, nonatomic) NSNumber *metaDataForRoaming;
@property (readonly, nonatomic) NSDate *billingCycleEndDate;
@property (readonly, nonatomic) NSDate *previousBillingCycleDate;
@property (readonly, nonatomic) NSNumber *billingCycleSupported;
@property (readonly, nonatomic) NSNumber *carrierSpaceSupported;
@property (readonly, nonatomic) NSString *workspaceName;
@property (readonly, nonatomic) NSString *workspacePath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriberTag:(id)a0 metaDataForHomeCountry:(id)a1 metaDataForRoaming:(id)a2 billingCycleEndDate:(id)a3 previousBillingCycleDate:(id)a4 billingCycleSupported:(id)a5 carrierSpaceSupported:(id)a6 workspaceName:(id)a7 workspacePath:(id)a8;

@end
