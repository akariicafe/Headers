@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction

@property (retain, nonatomic) NSMutableArray *exportSessions;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)encodeItems:(id)a0 metadata:(id)a1;
- (void)getMetadataItems:(id /* block */)a0;
- (id)metadataForAsset:(id)a0 newMetadata:(id)a1;
- (id)nonEmptyStringValueForKey:(id)a0;
- (void)updateSpeedVisibility;

@end
