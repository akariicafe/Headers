@class NSString, NSArray;

@interface FCJSONRecordSourceSchema : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordIDPrefix;
@property (readonly, copy, nonatomic) NSArray *keys;
@property (readonly, copy, nonatomic) NSArray *localizableKeys;
@property (readonly, copy, nonatomic) NSArray *alwaysLocalizedKeys;
@property (readonly, copy, nonatomic) NSArray *allKeys;

- (id)initWithRecordType:(id)a0 recordIDPrefix:(id)a1 keys:(id)a2 localizableKeys:(id)a3 alwaysLocalizedKeys:(id)a4;
- (id)initWithRecordType:(id)a0 recordIDPrefix:(id)a1 keys:(id)a2 localizableKeys:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
