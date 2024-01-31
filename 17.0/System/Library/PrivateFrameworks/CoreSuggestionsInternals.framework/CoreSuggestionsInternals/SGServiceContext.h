@class SGSqlEntityStore;

@interface SGServiceContext : NSObject

@property (readonly, nonatomic) SGSqlEntityStore *store;

- (id)init;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;

@end
