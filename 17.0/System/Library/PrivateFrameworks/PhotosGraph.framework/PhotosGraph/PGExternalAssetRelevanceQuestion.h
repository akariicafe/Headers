@class NSString, NSDictionary;

@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (unsigned short)displayType;
- (unsigned short)state;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)additionalInfo;
- (id)entityIdentifier;
- (unsigned short)type;
- (id)initWithAssetUUID:(id)a0 momentLocalIdentifiers:(id)a1 assetInferredAsRelevant:(BOOL)a2;

@end
