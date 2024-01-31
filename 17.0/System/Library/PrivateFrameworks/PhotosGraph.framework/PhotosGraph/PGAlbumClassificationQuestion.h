@class NSDictionary, NSString;

@interface PGAlbumClassificationQuestion : PGSurveyQuestion {
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
- (id)initWithAlbumUUID:(id)a0 localFactoryScore:(double)a1;
- (double)localFactoryScore;

@end
