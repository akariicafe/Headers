@class NSString;

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)displayType;
- (unsigned short)state;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)type;
- (id)initWithAssetSyndicationIdentifier:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
