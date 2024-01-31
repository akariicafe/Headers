@class NSNumber;

@interface MTRScenesClusterCopySceneParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupIdFrom;
@property (copy, nonatomic) NSNumber *sceneIdFrom;
@property (copy, nonatomic) NSNumber *groupIdTo;
@property (copy, nonatomic) NSNumber *sceneIdTo;
@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *groupIdentifierFrom;
@property (copy, nonatomic) NSNumber *sceneIdentifierFrom;
@property (copy, nonatomic) NSNumber *groupIdentifierTo;
@property (copy, nonatomic) NSNumber *sceneIdentifierTo;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
