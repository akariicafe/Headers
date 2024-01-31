@class NSString, NSDictionary, NSDate;

@interface PGSurveyResult : NSObject <PGQuestion>

@property (copy, nonatomic) NSString *entityIdentifier;
@property (copy, nonatomic) NSString *momentIdentifier;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) unsigned short displayType;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short questionVersion;
@property (readonly, nonatomic) double localFactoryScore;
@property (nonatomic) double score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remove;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToSurveyResult:(id)a0;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
