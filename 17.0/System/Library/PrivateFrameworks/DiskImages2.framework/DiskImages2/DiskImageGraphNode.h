@class NSString, NSUUID, NSURL, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface DiskImageGraphNode : NSObject

@property (retain, nonatomic) NSURL *filePath;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *parentUUID;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL isCache;
@property (retain, nonatomic) NSMutableDictionary *pstackDict;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) DiskImageGraphNode *parent;

+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)toDictionary;
- (void)addDecendantsToArray:(id)a0;
- (BOOL)deleteImage;
- (id)getDescendants;
- (id)initWithDictionary:(id)a0 updateChangesToDict:(BOOL)a1 workDir:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 tag:(id)a1 UUID:(id)a2 parentUUID:(id)a3 metadata:(id)a4 isCache:(BOOL)a5;

@end
