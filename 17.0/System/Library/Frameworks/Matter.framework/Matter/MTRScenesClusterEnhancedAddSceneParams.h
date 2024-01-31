@class NSNumber, NSString, NSArray;

@interface MTRScenesClusterEnhancedAddSceneParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *sceneID;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSArray *extensionFieldSets;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
