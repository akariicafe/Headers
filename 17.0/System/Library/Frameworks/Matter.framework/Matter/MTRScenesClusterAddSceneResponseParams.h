@class NSNumber;

@interface MTRScenesClusterAddSceneResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *sceneID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x0; unsigned short x1; unsigned char x2; } *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
