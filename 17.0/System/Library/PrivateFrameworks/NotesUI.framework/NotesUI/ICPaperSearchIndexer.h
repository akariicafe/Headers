@class NSManagedObjectContext, NSManagedObjectID;

@interface ICPaperSearchIndexer : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ titleQueries;
    void /* unknown type, empty encoding */ previousTask;
}

@property (class, nonatomic, readonly) ICPaperSearchIndexer *shared;

- (id)init;
- (void)updateIndexForAttachment:(NSManagedObjectID *)a0 managedObjectContext:(NSManagedObjectContext *)a1 completionHandler:(void (^)(void))a2;

@end
