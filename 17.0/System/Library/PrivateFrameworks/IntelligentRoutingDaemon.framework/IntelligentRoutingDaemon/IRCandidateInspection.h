@class IRCandidateInspectionServicePackage, IRCandidateInspectionGenerator;

@interface IRCandidateInspection : NSObject

@property (readonly, nonatomic) IRCandidateInspectionServicePackage *inspectionServicePackage;
@property (readonly, nonatomic) IRCandidateInspectionGenerator *inspectionGenerator;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)getCandidateIdentifier;
- (long long)getClassification;
- (id)getClassificationDescription;
- (id)initWithInspectionGenerator:(id)a0;
- (id)initWithInspectionServicePackage:(id)a0;

@end
