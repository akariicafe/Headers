@class NSString;

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int modelClassNameOffset;
@property (readonly, nonatomic) NSString *modelClassName;

- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 modelClassName:(id)a1;

@end
