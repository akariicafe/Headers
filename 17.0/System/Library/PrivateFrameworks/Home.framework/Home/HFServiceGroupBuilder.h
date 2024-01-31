@class HFRoomBuilder, NSString, NSArray, HFMutableSetDiff, HMServiceGroup;
@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder>

@property (readonly, nonatomic) HFMutableSetDiff *serviceUUIDs;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (nonatomic) BOOL hasSetRoom;
@property (nonatomic) BOOL hasSetIcon;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSString *primaryServiceType;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL showInHomeDashboard;
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (void)addService:(id)a0;
- (void)removeService:(id)a0;
- (id)_performValidation;
- (void).cxx_destruct;
- (id)_updateIcon;
- (id)accessories;
- (id)_rooms;
- (void)setServiceGroup:(id)a0;
- (id)_updateName;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)removeItemFromHome;
- (BOOL)shouldAllowAddingService:(id)a0;
- (id)_updateServices;
- (id)_createServiceGroup;
- (id)_mostCommonIconDescriptor;
- (BOOL)_supportsCustomIcons;
- (id)_updateRooms;
- (id)_updateValueForContextType:(unsigned long long)a0;

@end
