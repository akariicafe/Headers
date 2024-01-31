@class NSManagedObjectContext, ICQueryResultsControllerObjC, ICQuery;

@interface ICQueryResultsController : NSObject

@property (retain, nonatomic) ICQueryResultsControllerObjC *queryResultsControllerObjC;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICQuery *query;

- (void).cxx_destruct;
- (id)performFetch;
- (id)initWithManagedObjectContext:(id)a0 query:(id)a1;

@end
