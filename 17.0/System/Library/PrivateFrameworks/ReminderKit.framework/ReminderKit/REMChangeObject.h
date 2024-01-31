@class NSSet, REMChangeTombstone, REMChangeTransaction, REMObjectID;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) REMChangeTransaction *transaction;
@property (readonly, nonatomic) long long changeID;
@property (readonly, nonatomic) REMObjectID *changedObjectID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) REMChangeTombstone *tombstone;
@property (readonly, nonatomic) NSSet *updatedProperties;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coalescedChanges;
- (id)copyForCoalescing;
- (BOOL)isCoalesced;

@end
