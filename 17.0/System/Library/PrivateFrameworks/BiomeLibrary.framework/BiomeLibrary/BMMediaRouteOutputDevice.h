@class NSString, NSArray;

@interface BMMediaRouteOutputDevice : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *outputDeviceID;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subType;
@property (readonly, nonatomic) int clusterType;
@property (readonly, nonatomic) NSArray *flattenedClusterLeafMembers;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_flattenedClusterLeafMembersJSONArray;
- (id)initWithOutputDeviceID:(id)a0 type:(int)a1 subType:(int)a2 clusterType:(int)a3 flattenedClusterLeafMembers:(id)a4;

@end
