@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {
    NSArray *_originalIdentifiers;
}

@property (readonly, nonatomic, getter=_hasVenueID) BOOL hasVenueID;
@property (readonly, nonatomic) unsigned long long venueID;
@property (readonly, nonatomic, getter=_hasFeatureID) BOOL hasFeatureID;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic, getter=_hasBusinessID) BOOL hasBusinessID;
@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) NSArray *componentIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentIdentifiersFromVenueIdentifiers:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVenueID:(unsigned long long)a0;
- (id)initWithVenueID:(unsigned long long)a0 componentIdentifiers:(id)a1;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2 componentIdentifiers:(id)a3;
- (id)initWithVenueIdentifiers:(id)a0;
- (id)placeDataVenueIdentifier;
- (id)placeDataVenueIdentifierForVenue;

@end
