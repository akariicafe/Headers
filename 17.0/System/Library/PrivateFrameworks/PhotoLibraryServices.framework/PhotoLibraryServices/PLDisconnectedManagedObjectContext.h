@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (BOOL)canMergeRemoteChanges;
+ (BOOL)shouldHavePhotoLibrary;

- (BOOL)isDatabaseCreationContext;
- (void)setPhotoLibrary:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;

@end
