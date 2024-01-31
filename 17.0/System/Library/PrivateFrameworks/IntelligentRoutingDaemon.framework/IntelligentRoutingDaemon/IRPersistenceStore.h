@class NSString, NSDictionary, NSURL, NSPersistentStoreDescription;

@interface IRPersistenceStore : NSObject {
    NSPersistentStoreDescription *_storeDescription;
}

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *storeType;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadWithCoordinator:(id)a0;

@end
