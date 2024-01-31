@class NSString;

@interface SBSAElementSnapshotContext : NSObject <NSCopying, SAElementIdentifying, SAUISnapshotReasonProviding, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setClientIdentifier:) NSString *clientIdentifier;
@property (copy, nonatomic, setter=_setElementIdentifier:) NSString *elementIdentifier;
@property (copy, nonatomic, setter=_setSnapshotReason:) NSString *snapshotReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSnapshotIdentity:(id)a0;

@end
