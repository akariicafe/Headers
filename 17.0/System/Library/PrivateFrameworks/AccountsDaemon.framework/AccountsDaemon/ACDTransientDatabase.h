@class NSString, NSPersistentStoreCoordinator;

@interface ACDTransientDatabase : NSObject <ACDDatabaseProtocol> {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
