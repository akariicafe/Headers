@class SVXUserFeedbackNode, NSString, SVXUserFeedback, NSSet;

@interface _SVXUserFeedbackNodeMutation : NSObject <SVXUserFeedbackNodeMutating> {
    SVXUserFeedbackNode *_baseModel;
    NSString *_identifier;
    double _duration;
    SVXUserFeedback *_feedback;
    NSSet *_dependentNodes;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasDuration : 1; unsigned char hasFeedback : 1; unsigned char hasDependentNodes : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setIdentifier:(id)a0;
- (id)generate;
- (void)setFeedback:(id)a0;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDependentNodes:(id)a0;

@end
