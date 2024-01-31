@class NSArray;

@interface SiriAnalyticsXPCConnectionEntitlements : NSObject {
    NSArray *_extendedEntitlements;
}

@property (readonly, nonatomic, getter=hasGenericEntitlement) BOOL genericEntitlement;
@property (readonly, nonatomic, getter=hasRuntimeManagement) BOOL runtimeManagement;
@property (readonly, nonatomic, getter=hasRuntimeIntrospection) BOOL runtimeIntrospection;
@property (readonly, nonatomic, getter=hasUnifiedMessageStreamReadOnlyAccess) BOOL unifiedMessageStreamReadOnlyAccess;
@property (readonly, nonatomic, getter=canPublishUnordered) BOOL publishUnorderedMessages;
@property (readonly, nonatomic, getter=hasPluginState) BOOL pluginState;
@property (readonly, nonatomic) NSArray *extendedEntitlements;

- (id)initWithEntitlements:(id)a0;
- (void).cxx_destruct;

@end
