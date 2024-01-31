@class NSString, BMTableStore;

@interface BMBiomeTableStore : NSObject <BMTableQuery>

@property (retain, nonatomic) BMTableStore *tableStore;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *tableName;

- (id)select:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 tableName:(id)a1;
- (id)initWithURL:(id)a0 tableName:(id)a1 identifier:(id)a2;
- (id)selectTableNamed:(id)a0;

@end
