@class NSUUID, NSPredicate;

@interface MGOutstandingQuery : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL requiresTopology;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;

@end
