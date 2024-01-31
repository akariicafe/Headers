@class NSDictionary, NSString;

@interface PGRelationshipQuestion : PGSurveyQuestion {
    unsigned short _state;
    unsigned short _displayType;
    unsigned short _entityType;
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
- (id)initWithRelationshipLabel:(id)a0 confirmedPersonUUID:(id)a1;
- (id)initWithRelationshipLabel:(id)a0 personUUID:(id)a1 displayString:(id)a2 localFactoryScore:(double)a3;
- (id)initWithRelationshipLabel:(id)a0 personUUID:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
