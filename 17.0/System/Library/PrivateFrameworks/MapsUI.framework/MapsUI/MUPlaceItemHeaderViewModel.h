@class MKDistanceFormatter;
@protocol _MKPlaceItem;

@interface MUPlaceItemHeaderViewModel : MUPlaceHeaderViewModel {
    id<_MKPlaceItem> _placeItem;
    MKDistanceFormatter *_distanceFormatter;
}

@property (readonly, nonatomic) BOOL isUserSpecificPlaceItem;
@property (readonly, nonatomic) BOOL showNearbyStringForContactPlaceItem;

- (void).cxx_destruct;
- (BOOL)hasEnclosingPlace;
- (BOOL)hasInitialData;
- (id)initWithPlaceItem:(id)a0;
- (id)_userSpecificPlaceSecondaryName;
- (id)_formattedDistanceString;
- (id)addressDescriptionForContact;
- (id)enclosingPlaceAttributedStringWithFont:(id)a0 labelColor:(id)a1 tokenColor:(id)a2;
- (id)placeSecondaryName;
- (BOOL)supportsContactAddressDescription;
- (id)transitLabelItems;

@end
