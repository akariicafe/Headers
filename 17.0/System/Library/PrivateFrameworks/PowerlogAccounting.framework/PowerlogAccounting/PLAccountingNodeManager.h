@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject

@property (retain) NSMutableDictionary *nodeNameToNodeID;
@property (retain) NSMutableDictionary *nodeIDToNodeName;

+ (id)sharedInstance;

- (id)init;
- (id)nodeIDForNodeName:(id)a0 isPermanent:(BOOL)a1;
- (id)childNodeIDsFromChildNodeNames:(id)a0;
- (id)nodeNameForNodeID:(id)a0;
- (void).cxx_destruct;
- (void)setupNodes;
- (void)removeNodeReferenceFromCache:(id)a0;

@end
