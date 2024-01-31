@class NSObject;
@protocol OS_dispatch_queue;

@interface MSASModelEnumerator : NSEnumerator

@property (nonatomic) struct sqlite3 { } *db;
@property (nonatomic) struct sqlite3_stmt { } *stmt;
@property (copy, nonatomic) id /* block */ stepBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)enumeratorWithDatabase:(struct sqlite3 { } *)a0 query:(id)a1 stepBlock:(id /* block */)a2;

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithDatabase:(struct sqlite3 { } *)a0 query:(id)a1 stepBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
