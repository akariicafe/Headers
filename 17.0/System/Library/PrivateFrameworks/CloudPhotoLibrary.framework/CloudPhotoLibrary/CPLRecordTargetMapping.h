@class NSArray, NSSet, NSString, NSMutableDictionary, NSMutableSet;

@interface CPLRecordTargetMapping : NSObject {
    NSMutableDictionary *_targets;
    NSMutableDictionary *_targetsFromOtherScopedIdentifier;
    NSMutableSet *_updatedScopedIdentifiers;
    NSMutableSet *_scopedIdentifiersWithUnknownTargets;
}

@property (readonly, nonatomic) BOOL hasUnknownTargets;
@property (readonly, nonatomic) NSArray *allTargetScopedIdentifiers;
@property (readonly, nonatomic) NSArray *unknownTargetScopedIdentifiers;
@property (readonly, nonatomic) BOOL hasUpdatedTargets;
@property (readonly, nonatomic) NSSet *updatedTargetScopedIdentifiers;
@property (readonly, nonatomic) NSString *updatedTargetsDescription;
@property (readonly, nonatomic) NSString *targetDescriptions;

- (id)init;
- (void).cxx_destruct;
- (void)_setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1 isUpdate:(BOOL)a2;
- (void)addKnownTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)enumerateTargetsWithBlock:(id /* block */)a0;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)a0;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)a0;
- (void)setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)startTrackingUpdates;
- (id)targetForRecordWithOtherScopedIdentifier:(id)a0;
- (id)targetForRecordWithScopedIdentifier:(id)a0;

@end
