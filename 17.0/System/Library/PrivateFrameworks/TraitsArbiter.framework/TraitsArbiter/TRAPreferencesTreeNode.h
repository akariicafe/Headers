@class NSString, TRAParticipant, NSArray;
@protocol TRAPreferencesTreeNode;

@interface TRAPreferencesTreeNode : NSObject <TRAPreferencesTreeNode, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) TRAParticipant *participant;
@property (weak, nonatomic) id<TRAPreferencesTreeNode> parent;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) double order;
@property (nonatomic) BOOL debugLastSettingsWereValidated;
@property (copy, nonatomic) NSString *debugLastOrientationSettingsValidationFailureReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addChild:(id)a0;
- (id)_participant;
- (id)initWithParticipant:(id)a0;
- (id)settingsUpdater;

@end
