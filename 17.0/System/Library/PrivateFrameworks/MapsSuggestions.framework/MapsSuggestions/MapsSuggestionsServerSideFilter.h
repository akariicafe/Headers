@class NSString;

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    BOOL _enabledEntryTypeUnknown;
    BOOL _enabledEntryTypeHome;
    BOOL _enabledEntryTypeWork;
    BOOL _enabledEntryTypeCalendarEvent;
    BOOL _enabledEntryTypeFrequentLocation;
    BOOL _enabledEntryTypeRecentHistory;
    BOOL _enabledEntryTypeOldPreYukonFavorite;
    BOOL _enabledEntryTypeParkedCar;
    BOOL _enabledEntryTypeRestaurantReservation;
    BOOL _enabledEntryTypeRidesharing;
    BOOL _enabledEntryTypeCarPlayLowEnergy;
    BOOL _enabledEntryTypeResumeRoute;
    BOOL _enabledEntryTypeAppConnection;
    BOOL _enabledEntryTypeHotel;
    BOOL _enabledEntryTypeCarRental;
    BOOL _enabledEntryTypeTravelFlight;
    BOOL _enabledEntryTypeTicketedEvent;
    BOOL _enabledEntryTypePortrait;
    BOOL _enabledEntryTypeUserPlace;
    BOOL _enabledEntryTypeSchool;
    BOOL _enabledEntryTypeVehicleSetup;
    BOOL _enabledEntryTypeFavoriteButton;
    BOOL _enabledEntryTypeOrderStatus;
    BOOL _enabledEntryTypeContactActivity;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (id)init;
- (BOOL)shouldKeepEntry:(id)a0;

@end
