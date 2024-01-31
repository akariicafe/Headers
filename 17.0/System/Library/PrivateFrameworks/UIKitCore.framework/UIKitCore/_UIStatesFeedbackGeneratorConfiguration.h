@class NSString, NSDictionary;

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSString *initialState;
@property (retain, nonatomic) NSDictionary *stateChangeConfigurations;

+ (id)keyFromState:(id)a0 toState:(id)a1;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
