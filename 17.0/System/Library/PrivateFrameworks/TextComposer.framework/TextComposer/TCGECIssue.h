@class NSString;

@interface TCGECIssue : NSObject

@property (readonly, nonatomic) unsigned long long issueType;
@property (readonly, nonatomic) NSString *correction;
@property (readonly, nonatomic) float confidence;

- (void).cxx_destruct;
- (id)initWithCorrection:(id)a0 andConfidence:(float)a1 forIssueType:(unsigned long long)a2;

@end
