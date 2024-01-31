@class NSString;

@interface DADataHandler : NSObject

@property (copy, nonatomic) NSString *changeTrackingID;
@property (nonatomic) void *container;

+ (id)newDataHandlerForDataclass:(long long)a0 container:(void *)a1 changeTrackingID:(id)a2;

- (void)dealloc;
- (long long)dataclass;
- (void).cxx_destruct;
- (void)openDB;
- (BOOL)closeDBAndSave:(BOOL)a0;
- (void *)copyLocalObjectFromId:(int)a0;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (void)drainSuperfluousChanges;
- (id)getDAExceptionObjectWithLocalItem:(void *)a0 originalEvent:(id)a1 account:(id)a2;
- (id)getDAObjectWithLocalItem:(void *)a0 serverId:(id)a1 account:(id)a2;
- (int)getIdFromLocalObject:(void *)a0;
- (id)initWithContainer:(void *)a0 changeTrackingID:(id)a1;
- (BOOL)saveContainer;
- (BOOL)wipeServerIds;

@end
