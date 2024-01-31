@class NSString, NSArray, NSDictionary, NSMapTable, NSNumber;

@interface HMBModelQuery : HMFObject

@property (readonly, nonatomic) NSString *sqlPredicate;
@property (readonly, nonatomic) NSArray *sqlColumns;
@property (readonly, nonatomic) unsigned long long maximumRowsPerSelect;
@property (readonly, nonatomic) NSNumber *initialSequence;
@property (readonly, nonatomic) NSDictionary *arguments;
@property (readonly, nonatomic) NSMapTable *preparedQueries;
@property (retain, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *sqlSelect;
@property (readonly, nonatomic) NSDictionary *argumentFields;
@property (readonly, nonatomic) NSDictionary *encodedDefaultValuesByArgumentName;
@property (readonly, nonatomic) BOOL hasExpectedIndexes;

- (id)performQueryOn:(id)a0 arguments:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)prepareOnTable:(id)a0;
- (id)initWithSQLPredicate:(id)a0 sqlColumns:(id)a1 initialSequence:(id)a2 maximumRowsPerSelect:(unsigned long long)a3 arguments:(id)a4;

@end
