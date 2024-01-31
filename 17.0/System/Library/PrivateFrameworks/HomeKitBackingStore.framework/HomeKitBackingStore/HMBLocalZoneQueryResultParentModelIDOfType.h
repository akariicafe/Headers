@class NSUUID, NSString;

@interface HMBLocalZoneQueryResultParentModelIDOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int parentModelIDOffset;
@property (readonly, nonatomic) NSUUID *parentModelID;
@property (readonly, nonatomic) int modelClassNameOffset;
@property (readonly, nonatomic) NSString *modelClassName;

- (void).cxx_destruct;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 parentModelID:(id)a1 modelClassName:(id)a2;

@end
