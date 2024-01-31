@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSString *iccid;

+ (id)referenceFromCellularPlanPendingTransfer:(id)a0;
+ (id)referenceFromDanglingPlanItem:(id)a0;
+ (id)referenceFromPlanItem:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)getLogger;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIccid:(id)a0;

@end
