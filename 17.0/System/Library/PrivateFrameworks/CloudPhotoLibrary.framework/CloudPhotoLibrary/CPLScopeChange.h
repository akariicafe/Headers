@class CPLLibraryInfo, CPLAccountFlags, NSString, NSDate, CPLEngineScope, CPLScopedIdentifier, CPLLibraryState, CPLShare;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeType;
@property (retain, nonatomic) CPLLibraryState *libraryState;
@property (retain, nonatomic) CPLLibraryInfo *libraryInfo;
@property (nonatomic) long long busyState;
@property (copy, nonatomic) NSString *stagingScopeIdentifier;
@property (nonatomic) unsigned long long pullTaskItem;
@property (retain, nonatomic) CPLEngineScope *scope;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) NSDate *disabledDate;
@property (readonly, nonatomic) NSDate *deleteDate;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (readonly, nonatomic) BOOL containerHasBeenWiped;
@property (retain, nonatomic) CPLShare *share;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (copy, nonatomic) NSString *title;

+ (id)descriptionForScopeType:(long long)a0;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)newScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (id)descriptionForBusyState:(long long)a0;
+ (id)mappingForScopeBusyStateDescription;
+ (id)mappingForScopeTypeDescription;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)newScopeChangeWithAutomaticScopeIdentifierForScopeType:(long long)a0;
+ (Class)scopeChangeClassForType:(long long)a0;
+ (BOOL)scopeWithTypeHasQuota:(long long)a0;
+ (BOOL)shouldAutoActivateScopeWithType:(long long)a0;
+ (BOOL)supportsDirectMinglingForScopeWithType:(long long)a0;
+ (BOOL)supportsStagingScopeForScopeWithType:(long long)a0;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)scopeIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_scopedIdentifier;
- (id)assetCountPerType;
- (void)_setChangeType:(unsigned long long)a0;
- (id)_additionalDescription;
- (long long)defaultFlags;
- (id)initWithScopeIdentifier:(id)a0 type:(long long)a1;
- (BOOL)isLibraryShare;
- (BOOL)isScopeChange;
- (BOOL)needsToSetScopeIdentifier;
- (BOOL)shouldAlwaysUpdateScopeInfoWhenPossible;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(BOOL *)a2;
- (void)updateScopeIdentifier:(id)a0;

@end
