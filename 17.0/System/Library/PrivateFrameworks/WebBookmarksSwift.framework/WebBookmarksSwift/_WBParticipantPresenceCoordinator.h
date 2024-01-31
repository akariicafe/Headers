@class NSDictionary, NSString, NSSet;

@interface _WBParticipantPresenceCoordinator : NSObject {
    void /* unknown type, empty encoding */ participantPresenceStore;
    void /* unknown type, empty encoding */ connectionManagerStore;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)getCurrentConnectionStateWithCompletionHandler:(void (^)(NSDictionary *))a0;
- (void)shareDidUpdate:(id)a0;
- (void)beginCollaborationForShare:(id)a0;
- (void)beginDeviceCoordination;
- (void)endCollaborationForShare:(id)a0;
- (void)endDeviceCoordination;
- (void)getActiveParticipantsInTabGroupWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSSet *))a1;
- (void)getActiveParticipantsInTabWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSSet *))a1;
- (void)getCurrentLocationIdentifiersForParticipantIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *, NSString *))a1;
- (void)moveCurrentParticipantToTabIdentifier:(id)a0 inTabGroupIdentifier:(id)a1 withDeviceIdentifier:(id)a2;
- (void)getTabGroupIdentifierForParticipantIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;
- (void)getTabIdentifierForParticipantIdentifier:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;
- (void)removeTabGroupWithIdentifier:(id)a0;
- (void)removeTabWithIdentifier:(id)a0;

@end
