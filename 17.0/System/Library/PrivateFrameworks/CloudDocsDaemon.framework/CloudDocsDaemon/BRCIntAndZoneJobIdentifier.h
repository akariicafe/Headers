@class NSString, BRCZoneRowID;

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long intID;
@property (readonly, nonatomic) BRCZoneRowID *zoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)columns;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jobsDescription;
- (id)columnsValues;
- (id)initWithIntID:(long long)a0 zoneRowID:(id)a1;
- (BOOL)isEqualToIntAndZoneJobIdentifier:(id)a0;
- (id)matchingJobsWhereSQLClause;

@end
