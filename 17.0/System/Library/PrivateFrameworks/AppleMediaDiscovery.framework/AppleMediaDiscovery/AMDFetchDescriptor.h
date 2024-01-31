@class NSArray, NSString;

@interface AMDFetchDescriptor : NSObject

@property (retain, nonatomic) NSArray *_columnSpecs;
@property (nonatomic) long long _domain;
@property (retain, nonatomic) NSString *_id;
@property (nonatomic) int _keyColumn;
@property (nonatomic) int _listColumn;
@property (nonatomic) char _saveAsType;
@property (retain, nonatomic) NSString *_statement;
@property (nonatomic) int _valueColumn;

+ (id)refreshAggregationDescriptors:(id)a0 forDomain:(id)a1 error:(id *)a2;
+ (char)getCodeForSaveAsType:(id)a0;
+ (id)extractPart:(id)a0 from:(id)a1 required:(BOOL)a2 error:(id *)a3;

- (id)persistObject:(id)a0 error:(id *)a1;
- (id)getStatement;
- (id)initWithDict:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)getId;
- (long long)getDomain;
- (id)persist:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)setDomain:(long long)a0;
- (id)getColumnSpecs;
- (BOOL)isPersistable;

@end
