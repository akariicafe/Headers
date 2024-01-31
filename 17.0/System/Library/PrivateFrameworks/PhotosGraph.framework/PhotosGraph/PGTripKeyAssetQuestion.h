@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)displayType;
- (unsigned short)state;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)additionalInfo;
- (id)entityIdentifier;
- (unsigned short)type;
- (id)initWithKeyAssetUUID:(id)a0 tripName:(id)a1 isLongTrip:(BOOL)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
