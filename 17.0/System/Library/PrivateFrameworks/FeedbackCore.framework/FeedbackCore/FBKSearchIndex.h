@class NSManagedObjectContext;

@interface FBKSearchIndex : NSObject {
    int _isSearching;
}

@property (retain) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (void)asynchronouslySearchWithQuery:(id)a0 completionHandler:(id /* block */)a1;

@end
