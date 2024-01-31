@class NSUUID;

@interface HMBLocalZoneQueryResultParentModelID : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int parentModelIDOffset;
@property (readonly, nonatomic) NSUUID *parentModelID;

- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 parentModelID:(id)a1;

@end
