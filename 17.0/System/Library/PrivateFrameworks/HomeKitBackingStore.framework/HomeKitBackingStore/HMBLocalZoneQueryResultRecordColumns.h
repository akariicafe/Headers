@interface HMBLocalZoneQueryResultRecordColumns : HMBLocalZoneQueryResult

- (id)fetchRow:(id)a0 error:(id *)a1;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { } *)a0 skip:(BOOL *)a1 updatedSequence:(unsigned long long *)a2 error:(id *)a3;

@end
