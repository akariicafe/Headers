@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (unsigned short)displayType;
- (unsigned short)state;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)additionalInfo;
- (id)entityIdentifier;
- (unsigned short)type;
- (id)initWithAssetUUID:(id)a0 suggestionType:(unsigned short)a1 suggestionSubtype:(unsigned short)a2;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
