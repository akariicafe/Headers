@class NSString, AFMutableConversationItem;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {
    AFMutableConversationItem *_delegateItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTransient;
- (long long)presentationState;
- (id)identifier;
- (void).cxx_destruct;
- (id)revisionIdentifier;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)dialogPhase;
- (id)initWithDelegateItem:(id)a0;
- (id)initWithIdentifier:(id)a0 revisionIdentifier:(id)a1 type:(long long)a2 aceObject:(id)a3 dialogPhase:(id)a4 presentationState:(long long)a5 aceCommandIdentifier:(id)a6 virgin:(BOOL)a7 transient:(BOOL)a8 supplemental:(BOOL)a9 immersiveExperience:(BOOL)a10 associatedDataStore:(id)a11;
- (id)initWithType:(long long)a0 aceObject:(id)a1 dialogPhase:(id)a2 presentationState:(long long)a3 aceCommandIdentifier:(id)a4 virgin:(BOOL)a5 transient:(BOOL)a6 supplemental:(BOOL)a7 immersiveExperience:(BOOL)a8 associatedDataStore:(id)a9;
- (BOOL)isImmersiveExperience;
- (BOOL)isSupplemental;
- (BOOL)isVirgin;

@end
