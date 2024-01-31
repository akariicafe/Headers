@class PNRPhoneNumberResolver;

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver;

- (id)init;
- (id)locationForMetadataIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;

@end
