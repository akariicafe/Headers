@class NSString, CNMutableGroup;

@interface DAContactsGroup : NSObject <DAGroup>

@property (readonly, nonatomic) CNMutableGroup *group;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)externalIdentifier;
- (int)legacyIdentifier;
- (void)setETag:(id)a0;
- (void).cxx_destruct;
- (void)setExternalIdentifier:(id)a0;
- (id)eTag;
- (id)initWithGroup:(id)a0;
- (BOOL)isContact;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;
- (id)asGroup;
- (void *)asABGroup;

@end
