@interface HMBLocalSQLIteratorRowBlock : HMBSQLQueryIterator

@property (readonly, nonatomic) int zoneRowBindOffset;
@property (readonly, nonatomic, getter=isAscending) BOOL ascending;
@property (readonly, nonatomic) unsigned long long zoneRow;

- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithSQLContext:(id)a0 zoneRow:(unsigned long long)a1 statement:(id)a2 isAscending:(BOOL)a3;

@end
