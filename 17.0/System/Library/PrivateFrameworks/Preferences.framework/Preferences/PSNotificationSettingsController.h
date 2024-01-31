@class BBSettingsGateway, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PSNotificationSettingsController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BBSettingsGateway *_gateway;
    NSDictionary *_sectionInfosByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)sectionInfoForIdentifier:(id)a0;
- (id)allSectionInfoIdentifiers;
- (void).cxx_destruct;

@end
