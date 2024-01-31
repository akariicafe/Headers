@class NSSet, CSReceiverPreferences;

@interface CSRecieverState : NSObject

@property (readonly, nonatomic) CSReceiverPreferences *receiverPreferences;
@property (readonly, nonatomic) NSSet *enabledBundleIdentifiers;
@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;
@property (readonly, nonatomic) int notifyToken;

+ (id)sharedInstance;

- (id)init;
- (BOOL)checkBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateFromPreferences;

@end
