@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validAt;
@property (copy, nonatomic) NSString *name;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
