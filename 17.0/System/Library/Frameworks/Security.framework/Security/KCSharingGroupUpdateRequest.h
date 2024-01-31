@class KCSharingGroup;

@interface KCSharingGroupUpdateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) KCSharingGroup *group;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUpdatedGroup:(id)a0;

@end
