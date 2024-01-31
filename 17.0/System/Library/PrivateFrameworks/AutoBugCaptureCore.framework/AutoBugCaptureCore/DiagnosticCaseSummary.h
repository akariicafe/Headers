@class NSString, NSDate;

@interface DiagnosticCaseSummary : NSManagedObject

@property (retain, nonatomic) NSString *caseID;
@property (retain, nonatomic) NSString *caseGroupID;
@property (retain, nonatomic) NSDate *caseCreatedTime;
@property (retain, nonatomic) NSDate *caseClosedTime;
@property (retain, nonatomic) NSString *caseDomain;
@property (retain, nonatomic) NSString *caseType;
@property (retain, nonatomic) NSString *caseSubtype;
@property (retain, nonatomic) NSString *caseSubtypeContext;
@property (retain, nonatomic) NSString *caseDetectedProcess;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (nonatomic) short caseClosureType;
@property (nonatomic) short caseDampeningType;
@property (retain, nonatomic) NSString *caseAttachments;
@property (retain, nonatomic) NSString *caseContext;
@property (nonatomic) BOOL remoteTrigger;
@property (nonatomic) short caseSummaryState;
@property (retain, nonatomic) NSString *buildVariant;
@property (retain, nonatomic) NSString *buildVersion;

@end
