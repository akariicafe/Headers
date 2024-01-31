@class NSString, TSDCommentStorage;

@interface TSTCommentStorageWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>

@property (readonly, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellDiffProperties;

- (void).cxx_destruct;
- (void)didInitFromSOS;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (void)applyToCell:(id)a0;
- (id)initWithCommentStorage:(id)a0;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;

@end
