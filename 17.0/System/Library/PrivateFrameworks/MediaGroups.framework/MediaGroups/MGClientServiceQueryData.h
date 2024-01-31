@class NSPredicate;

@interface MGClientServiceQueryData : NSObject

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 updateHandler:(id /* block */)a1;

@end
