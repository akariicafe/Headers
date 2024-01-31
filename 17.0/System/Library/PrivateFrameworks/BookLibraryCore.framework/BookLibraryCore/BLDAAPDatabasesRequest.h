@class NSNumber;

@interface BLDAAPDatabasesRequest : BLDAAPURLRequest

@property (copy, nonatomic) NSNumber *delta;

- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 reason:(long long)a1 sessionID:(id)a2 revisionNumber:(id)a3 delta:(id)a4;

@end
