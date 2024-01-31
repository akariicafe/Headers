@class NSNumber;

@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSNumber *attributeValue;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
