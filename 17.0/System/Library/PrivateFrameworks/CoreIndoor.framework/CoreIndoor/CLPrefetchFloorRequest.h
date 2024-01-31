@class NSString, NSDate;

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *floorUuid;
@property (retain, nonatomic) NSString *venueUuid;
@property (retain, nonatomic) NSDate *relevancy;
@property (nonatomic) BOOL hasCompleteFloor;
@property (nonatomic) BOOL allowCellularDownload;
@property (nonatomic) long long locationContext;
@property (nonatomic) long long priority;

+ (id)prefetchRequestForFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 locationContext:(long long)a3;

- (BOOL)isEqualToRequest:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)floorUid;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 hasCompleteFloor:(BOOL)a3 allowCellularDownload:(BOOL)a4 locationContext:(long long)a5;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 hasCompleteFloor:(BOOL)a3 allowCellularDownload:(BOOL)a4 locationContext:(long long)a5 priority:(long long)a6;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 hasCompleteFloor:(BOOL)a3 allowCellularDownload:(BOOL)a4 locationContext:(long long)a5 ranking:(long long)a6;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 locationContext:(long long)a3;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 locationContext:(long long)a3 priority:(long long)a4;
- (id)initWithFloor:(id)a0 inVenue:(id)a1 lastRelevant:(id)a2 locationContext:(long long)a3 ranking:(long long)a4;
- (void)setFloorUid:(id)a0;

@end
