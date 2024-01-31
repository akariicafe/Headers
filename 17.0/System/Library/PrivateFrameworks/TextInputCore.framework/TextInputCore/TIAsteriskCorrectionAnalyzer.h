@class NSString;

@interface TIAsteriskCorrectionAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerEventSpec;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (id)init;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (BOOL)checkIfSession:(id)a0 isFromAllowedApp:(id)a1;

@end
