@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

+ (id)new;

- (long long)columnCount;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)values;
- (id)initWithValues:(id)a0;
- (id)valueAtIdx:(unsigned long long)a0;

@end
