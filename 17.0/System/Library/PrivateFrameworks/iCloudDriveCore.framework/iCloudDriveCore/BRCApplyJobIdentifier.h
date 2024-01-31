@interface BRCApplyJobIdentifier : BRCItemDBRowIDJobIdentifier

- (long long)rank;
- (id)initWithItemDBRowID:(long long)a0;
- (long long)rejectedRowID;
- (long long)serverItemRank;

@end
