@class NSMutableArray, NSMutableSet;

@interface PHASEActionTreeBuilder : NSObject {
    NSMutableArray *_rootNodes;
    NSMutableSet *_parameters;
    NSMutableSet *_mixNodes;
    unsigned int _nextNodeId;
}

+ (id)getParamArray:(id)a0 globalParamUIDs:(id)a1 outError:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addParameter:(id)a0;
- (BOOL)processNode:(id)a0 withArray:(id)a1 outError:(id *)a2;
- (BOOL)addRootNode:(id)a0;
- (id)createParseableDictionaryWithUID:(id)a0 rootNodes:(id)a1 globalParamUIDs:(id)a2 assetRegistry:(id)a3 outError:(id *)a4;
- (void)fillGeneratorNodeEntries:(id)a0 dictionary:(id)a1;
- (void)fillOutDirectivityFieldsWithParams:(id)a0 dictionary:(id)a1 isListener:(BOOL)a2;
- (void)fillOutDistanceFieldsWithParams:(id)a0 dictionary:(id)a1;
- (id)generateNodeDictionary:(id)a0 outError:(id *)a1;

@end
