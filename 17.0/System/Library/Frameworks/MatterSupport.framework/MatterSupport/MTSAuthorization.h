@class MTSXPCServerProxy;

@interface MTSAuthorization : NSObject

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly, getter=isRestrictedCharacteristicsAccessAllowed) BOOL restrictedCharacteristicsAccessAllowed;

+ (BOOL)isDeveloperModeEnabled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsRestrictedCharacteristicsAccessViaDeveloperModeProfile;
- (BOOL)allowsRestrictedCharacteristicsAccessViaSkipDeveloperModeRestrictionProfile;
- (id)initWithServerProxy:(id)a0;

@end
