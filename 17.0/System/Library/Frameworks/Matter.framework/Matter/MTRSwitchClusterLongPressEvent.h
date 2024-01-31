@class NSNumber;

@interface MTRSwitchClusterLongPressEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
