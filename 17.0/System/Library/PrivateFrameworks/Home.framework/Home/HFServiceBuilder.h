@class HFRoomBuilder, NSString, NSArray, HMService, HFNamingComponents;
@protocol HFIconDescriptor;

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder, HFNamedItemBuilder>

@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (readonly, nonatomic) HMService *service;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (nonatomic) long long configurationState;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSString *name;
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

- (id)_performValidation;
- (void).cxx_destruct;
- (id)accessories;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)removeItemFromHome;
- (id)_lazilyUpdateConfigurationState;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateValueForContextType:(unsigned long long)a0;
- (BOOL)_shouldUpdateNilNameWithRoomName;

@end
