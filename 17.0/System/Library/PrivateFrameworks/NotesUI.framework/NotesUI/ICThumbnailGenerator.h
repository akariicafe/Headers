@class NSManagedObjectContext;

@interface ICThumbnailGenerator : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
