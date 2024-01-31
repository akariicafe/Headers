@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer>

@property (readonly, nonatomic) void *source;
@property (nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setType:(long long)a0;
- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)accountIdentifier;
- (void)dealloc;
- (void)setAccountIdentifier:(id)a0;
- (id)externalIdentifier;
- (void)setName:(id)a0;
- (id)identifier;
- (id)meContactIdentifier;
- (void)setExternalIdentifier:(id)a0;
- (id)name;
- (void)setMeContactIdentifier:(id)a0;
- (long long)type;
- (BOOL)isLocal;
- (BOOL)isContact;
- (id)constraintsPath;
- (void)setConstraintsPath:(id)a0;
- (void)setSyncData:(id)a0;
- (id)syncData;
- (void)markForDeletion;
- (id)syncTag;
- (BOOL)arePropertiesReadonly;
- (id)asContainer;
- (void *)asSource;
- (id)cTag;
- (id)initWithABSource:(void *)a0;
- (BOOL)isAccount;
- (BOOL)isContentReadonly;
- (BOOL)isSearchContainer;
- (void)markAsDefault;
- (void)setArePropertiesReadonly:(BOOL)a0;
- (void)setCTag:(id)a0;
- (void)setContentReadonly:(BOOL)a0;
- (void)setSyncTag:(id)a0;
- (void)updateSaveRequest:(id)a0;

@end
