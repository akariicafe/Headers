@class NSArray, NSDictionary, ClientConnection, NSMutableSet, NSMutableArray;

@interface CADFetchedObjectSerializer : NSObject

@property (readonly, nonatomic) ClientConnection *connection;
@property (readonly, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad;
@property (readonly, nonatomic) NSMutableArray *wrappers;
@property (readonly, nonatomic) NSMutableSet *seenObjectIDs;
@property (readonly, nonatomic) NSArray *fetchedObjectWrappers;

- (id)addEntity:(void *)a0;
- (id)_fetchedObjectDictionaryForEntity:(void *)a0;
- (id)initWithConnection:(id)a0 defaultPropertiesToLoad:(id)a1 relatedObjectPropertiesToLoad:(id)a2;
- (id)initWithConnection:(id)a0 defaultPropertiesToLoad:(id)a1;
- (id)_properties:(id)a0 forEntityIfNotSeen:(void *)a1 objectExists:(BOOL *)a2;
- (void).cxx_destruct;

@end
