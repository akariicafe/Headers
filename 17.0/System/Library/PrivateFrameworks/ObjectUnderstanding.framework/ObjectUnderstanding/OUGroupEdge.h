@class NSUUID;

@interface OUGroupEdge : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *source_object_uuid;
@property (retain, nonatomic) NSUUID *target_object_uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
