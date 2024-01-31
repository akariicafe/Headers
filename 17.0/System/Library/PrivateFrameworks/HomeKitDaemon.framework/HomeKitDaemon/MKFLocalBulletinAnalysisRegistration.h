@interface MKFLocalBulletinAnalysisRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long classifierOptions;

+ (id)fetchRequest;
+ (id)fetchAudioAnalysisModeRegistrationForAccessoryUUID:(id)a0 managedObjectContext:(id)a1;

@end
