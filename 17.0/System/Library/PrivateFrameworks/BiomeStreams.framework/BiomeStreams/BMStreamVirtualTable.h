@class BMSQLSchema;

@interface BMStreamVirtualTable : NSObject

@property (readonly, nonatomic) BOOL acceptPublisherOptions;
@property (readonly, nonatomic) BMSQLSchema *schema;
@property (readonly, copy, nonatomic) id /* block */ publisherBlock;

+ (id)new;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0;
- (id)initWithSchema:(id)a0 publisherBlock:(id /* block */)a1;
- (id)initWithSchema:(id)a0 publisherBlockWithOptions:(id /* block */)a1 acceptPublisherOptions:(BOOL)a2;
- (id)initWithStream:(id)a0 useCase:(id)a1;

@end
