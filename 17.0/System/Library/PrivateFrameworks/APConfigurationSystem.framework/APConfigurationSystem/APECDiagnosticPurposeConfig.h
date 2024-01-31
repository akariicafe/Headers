@class NSString, NSNumber, NSArray;

@interface APECDiagnosticPurposeConfig : APConfiguration <APECPurposeConfigProtocol>

@property (class, readonly, nonatomic) NSString *path;

@property (retain, nonatomic) NSNumber *purpose;
@property (retain, nonatomic) NSArray *allowedPurposes;
@property (retain, nonatomic) NSArray *allowedSources;
@property (retain, nonatomic) NSArray *disallowedEvents;
@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) NSNumber *samplePercentage;
@property (retain, nonatomic) NSNumber *samplePeriod;
@property (retain, nonatomic) NSNumber *collectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;

@end
