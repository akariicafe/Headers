@class NSData, NSString, MKMapItem, NSArray, SFText, SFImage, SFActionItem, MKSearchFoundationBusinessHoursAndDistanceRichText, NSBundle, MKLocationManager, MKSearchFoundationRichText, NSMutableArray;

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    NSArray *_descriptions;
    SFText *_title;
    SFImage *_thumbnail;
    SFActionItem *_action;
}

@property (retain, nonatomic) NSData *mapsData;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long mksfResultType;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) MKLocationManager *locationManager;
@property (retain, nonatomic) MKSearchFoundationRichText *secondLineDisplayedText;
@property (retain, nonatomic) MKSearchFoundationBusinessHoursAndDistanceRichText *thirdLineDisplayedText;
@property (retain, nonatomic) MKSearchFoundationRichText *fourthLineDisplayedText;
@property (retain, nonatomic) NSMutableArray *thirdLineText;
@property (nonatomic) BOOL optionSmallerScreen;
@property (retain, nonatomic) id attributionObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styledStringFromStringArray:(id)a0;

- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)dealloc;
- (void)setThumbnail:(id)a0;
- (void)setAction:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)thumbnail;
- (id)action;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (id)title;
- (void)setTitle:(id)a0;
- (void)_commonInit;
- (id)_populateButtonItemsAndCommands;
- (void)locationManagerUpdatedLocation:(id)a0;
- (id)_appleRatingsDescription;
- (id)_brandURL;
- (id)_businessAddress;
- (id)_businessCategory;
- (id)_businessHoursAndDistance;
- (id)_businessReviewText;
- (id)_defaultRichTextItems;
- (BOOL)_isSmallerScreen;
- (void)_locationApprovalDidChange;
- (id)_populateAppClipData:(id)a0;
- (id)_populateButtonItem:(id)a0 imageName:(id)a1 command:(id)a2;
- (id)descriptions;
- (id)initWithMapsData:(id)a0 iconSize:(unsigned long long)a1 bundleID:(id)a2;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)setDescriptions:(id)a0;

@end
