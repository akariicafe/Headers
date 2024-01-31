@class NSArray, ICRadioStationMetadata, NSDate;

@interface ICRadioGetTracksResponse : ICRadioResponse

@property (readonly, nonatomic) ICRadioStationMetadata *stationMetadata;
@property (readonly, nonatomic) long long tracklistActionType;
@property (readonly, copy, nonatomic) NSArray *tracks;
@property (readonly, copy, nonatomic) NSDate *assetExpirationDate;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;

@end
