@class NSString;

@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) unsigned long long itemDBRowID;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) int kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)columns;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDownloadJobIdentifier:(id)a0;
- (id)jobsDescription;
- (id)columnsValues;
- (id)initWithDBRowID:(unsigned long long)a0 etag:(id)a1 kind:(int)a2;
- (id)matchingJobsWhereSQLClause;

@end
