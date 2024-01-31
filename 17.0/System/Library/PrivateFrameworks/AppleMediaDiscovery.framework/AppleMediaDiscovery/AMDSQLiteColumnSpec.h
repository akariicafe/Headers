@class NSString, NSObject;

@interface AMDSQLiteColumnSpec : NSObject

@property (retain, nonatomic) NSString *alias;
@property (nonatomic) char dataType;
@property (retain, nonatomic) NSObject *defaultValue;
@property (retain, nonatomic) NSString *derivationExpression;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL notNull;
@property (retain, nonatomic) NSString *typeString;
@property (nonatomic) BOOL unique;

+ (char)getTypeEnumFor:(id)a0;

- (BOOL)isNotNull;
- (char)getType;
- (id)getCreateStatementPart;
- (id)getDefaultValue;
- (id)getName;
- (id)getTypeString;
- (void).cxx_destruct;
- (id)getSelectColumnName;
- (BOOL)isRequired;
- (id)initWithDict:(id)a0 withName:(id)a1 error:(id *)a2;
- (id)getSelectColumnExpression;

@end
