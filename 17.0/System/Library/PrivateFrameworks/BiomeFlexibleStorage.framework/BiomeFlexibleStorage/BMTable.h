@class NSArray, BMTableSchema;

@interface BMTable : NSObject

@property (copy, nonatomic) NSArray *rows;
@property (retain, nonatomic) BMTableSchema *schema;

+ (id)new;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRows:(id)a0 schema:(id)a1;

@end
