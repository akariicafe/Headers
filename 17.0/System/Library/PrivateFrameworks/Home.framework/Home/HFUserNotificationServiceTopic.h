@class NSSet, NAIdentity, NSString, HFAccessoryType;
@protocol HFIconDescriptor;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {
    HFAccessoryType *_iconForAccessoryType;
}

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSSet *serviceTypes;
@property (readonly, copy, nonatomic) NSSet *accessoryCategoryTypes;
@property (readonly, copy, nonatomic) NSString *topicName;
@property (readonly, copy, nonatomic) NSString *topicNameLocalizationKey;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HFAccessoryType *accessoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cameraTopic;
+ (id)_announceTopic;
+ (id)_energyTopic;
+ (id)_safetyAndSecurityTopic;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceType:(id)a0 topicNameLocalizationKey:(id)a1;
- (id)initWithServiceTypes:(id)a0 accessoryCategoryTypes:(id)a1 topicNameLocalizationKey:(id)a2 iconDescriptor:(id)a3;
- (id)initWithServiceTypes:(id)a0 accessoryCategoryTypes:(id)a1 topicNameLocalizationKey:(id)a2 iconForAccessoryType:(id)a3;

@end
