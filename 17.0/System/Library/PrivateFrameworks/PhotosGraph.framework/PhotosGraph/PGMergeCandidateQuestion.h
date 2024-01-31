@class NSString, NSDictionary, PHPerson;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    double _score;
    NSDictionary *_additionalInfo;
}

@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (void)remove;
- (unsigned short)displayType;
- (unsigned long long)hash;
- (double)score;
- (unsigned short)state;
- (void)setScore:(double)a0;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)additionalInfo;
- (BOOL)isEqual:(id)a0;
- (id)entityIdentifier;
- (unsigned short)type;
- (id)initWithPerson:(id)a0 score:(double)a1;
- (BOOL)isEqualToQuestion:(id)a0;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
