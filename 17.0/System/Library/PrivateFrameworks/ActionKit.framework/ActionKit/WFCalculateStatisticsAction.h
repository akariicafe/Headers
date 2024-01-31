@interface WFCalculateStatisticsAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)outputName;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
