@class NSMutableArray, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_xpc_object;

@interface CollationCore : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned int coll_uid;
@property (retain, nonatomic) NSMutableSet *coll_elems;
@property (retain, nonatomic) NSMutableArray *peer_array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;

- (id)initWithID:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)getID;
- (BOOL)isEmpty;
- (id)initWithXPC:(id)a0;
- (void)setupHandler;
- (BOOL)removeCollationElementWithPath:(id)a0;
- (BOOL)appendCollationElement:(id)a0;
- (id)createEndpoint;
- (void)enumerateCollationElements:(id /* block */)a0;
- (void)enumerateElements:(id /* block */)a0;
- (id)getValidPaths:(id)a0 forBundleID:(id)a1;
- (id)mountPointOfBundleID:(id)a0;
- (id)packToXPC;
- (void)parseMessage:(id)a0;

@end
