@class SFCounterfactualInfo, NSUUID;

@interface SFExperimentTriggeredFeedback : SFFeedback

@property (retain, nonatomic) SFCounterfactualInfo *counterfactual;
@property (retain, nonatomic) NSUUID *codepathId;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCfDiffered:(BOOL)a0 cfUsed:(BOOL)a1 cfError:(unsigned long long)a2;
- (id)initWithCodepathId:(id)a0;

@end
