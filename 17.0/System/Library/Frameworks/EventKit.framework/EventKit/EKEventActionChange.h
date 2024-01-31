@class EKObjectID;

@interface EKEventActionChange : EKObjectChange <EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
