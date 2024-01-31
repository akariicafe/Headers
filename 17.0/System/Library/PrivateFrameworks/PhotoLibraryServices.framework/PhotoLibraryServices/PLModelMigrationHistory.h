@class NSManagedObjectContext, NSArray;

@interface PLModelMigrationHistory : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_migrationHistory;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (BOOL)isLibraryOlderThanVersion:(unsigned short)a0;
- (id)libraryVersionHistorySinceLastRebuildOnly:(BOOL)a0;
- (BOOL)libraryWasEverRebuilt;

@end
