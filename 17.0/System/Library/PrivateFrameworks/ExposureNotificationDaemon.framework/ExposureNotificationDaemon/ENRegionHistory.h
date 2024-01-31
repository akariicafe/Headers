@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (void)removeRegionVisit:(id)a0;
- (void)addRegionVisit:(id)a0;
- (id)init;
- (id)getRegionVisits;
- (void)removeAllRegionVisits;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegionVisits:(id)a0;
- (id)description;
- (id)getRegions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
