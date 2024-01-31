@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex

@property BOOL attemptedIndexPathResolution;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (nonatomic) int resolvedIndexPathErrorCode;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

+ (id)defaultSearchableIndex;

- (id)xpc_dictionary_for_command:(const char *)a0 requiresInitialization:(BOOL)a1;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 protectionClass:(id)a1 path:(id)a2;

@end
