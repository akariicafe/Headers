@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)iconImage;
- (id)descriptionDictionary;
- (id)name;
- (BOOL)inputPassthrough;
- (BOOL)isMissing;
- (BOOL)requiresRemoteExecution;
- (void)runWithInput:(id)a0 error:(id *)a1;

@end
