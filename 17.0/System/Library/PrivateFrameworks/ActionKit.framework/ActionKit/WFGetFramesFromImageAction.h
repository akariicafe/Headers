@interface WFGetFramesFromImageAction : WFAction

@property (copy, nonatomic) id /* block */ cancelBlock;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void).cxx_destruct;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
