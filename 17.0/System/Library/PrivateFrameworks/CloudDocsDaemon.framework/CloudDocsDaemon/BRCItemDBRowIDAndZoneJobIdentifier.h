@interface BRCItemDBRowIDAndZoneJobIdentifier : BRCIntAndZoneJobIdentifier

@property (readonly, nonatomic) long long itemDBRowID;

- (id)initWithItemDBRowID:(long long)a0 zoneRowID:(id)a1;

@end
