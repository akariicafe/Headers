@class NSDictionary, NSString;

@interface PGMemoryMusicQualityQuestion : PGSurveyQuestion {
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
- (id)initWithMemory:(id)a0 song:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
