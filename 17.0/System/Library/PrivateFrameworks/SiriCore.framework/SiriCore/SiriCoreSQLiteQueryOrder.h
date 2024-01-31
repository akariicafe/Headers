@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>

@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSArray *columnNames;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColumnNames:(id)a0 mode:(long long)a1;

@end
