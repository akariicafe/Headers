@class NSString, NSArray;

@interface SCWRecordSchema : NSObject

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSArray *fieldNames;
@property (readonly, copy, nonatomic) NSArray *fieldSchemas;

- (id)schemaForFieldName:(id)a0;
- (id)initWithRecordType:(id)a0 fieldSchemas:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValidRecord:(id)a0;

@end
