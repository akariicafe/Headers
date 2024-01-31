@class NSDictionary, NSString;

@interface PGHolidayQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 holidayName:(id)a1 localizedHolidayName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
