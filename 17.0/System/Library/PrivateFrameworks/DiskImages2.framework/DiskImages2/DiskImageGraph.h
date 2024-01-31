@class NSMutableDictionary, NSURL, NSMutableArray, DiskImageGraphNode;

@interface DiskImageGraph : NSObject

@property (readonly, copy, nonatomic) NSURL *pstackURL;
@property (readonly, retain, nonatomic) NSMutableDictionary *pstackDB;
@property (retain, nonatomic) NSMutableArray *imagesDictsArray;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) DiskImageGraphNode *activeNode;
@property (nonatomic) BOOL imported;

+ (BOOL)copyDictNodesToFolder:(id)a0 dict:(id)a1 error:(id *)a2;
+ (BOOL)createNodesConnectivityWithNodesDict:(id)a0 error:(id *)a1;
+ (id)createPstackDictWithNode:(id)a0;
+ (id)getImageUUIDWithURL:(id)a0 error:(id *)a1;
+ (id)getRelativeIfContainedWithChildURL:(id)a0 parentURL:(id)a1;
+ (BOOL)loadPlistDictFromURL:(id)a0 errorNotPstack:(BOOL)a1 isPstack:(BOOL *)a2 dict:(id *)a3 error:(id *)a4;
+ (BOOL)populateNodesDictsWithArray:(id)a0 pstackURL:(id)a1 nodesDict:(id)a2 isTopLevelPstack:(BOOL)a3 error:(id *)a4;
+ (BOOL)saveToPlistWithDictionary:(id)a0 URL:(id)a1 error:(id *)a2;
+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)removeWithNode:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 tag:(id)a2 setNewActive:(BOOL)a3 error:(id *)a4;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 tag:(id)a2 toNode:(id)a3 setNewActive:(BOOL)a4 error:(id *)a5;
- (BOOL)cloneToURL:(id)a0 error:(id *)a1;
- (id)getImageWithTag:(id)a0 error:(id *)a1;
- (id)initWithBaseImageURL:(id)a0 newPstackURL:(id)a1 tag:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 pstackURL:(id)a1 imported:(BOOL)a2 error:(id *)a3;
- (id)initWithPstackURL:(id)a0 error:(id *)a1;
- (id)initWithPstackURL:(id)a0 imported:(BOOL)a1 error:(id *)a2;
- (BOOL)loadImportedNodesWithError:(id *)a0;
- (BOOL)removeNodeWithTag:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)removeNodeWithUUID:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)savePstackWithError:(id *)a0;
- (BOOL)setActiveNodeWithTag:(id)a0 error:(id *)a1;
- (BOOL)setActiveNodeWithUUID:(id)a0 error:(id *)a1;

@end
