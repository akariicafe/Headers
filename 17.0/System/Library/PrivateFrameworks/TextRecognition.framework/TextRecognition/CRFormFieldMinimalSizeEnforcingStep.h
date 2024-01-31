@class NSString, NSDictionary;

@interface CRFormFieldMinimalSizeEnforcingStep : NSObject <CRFormPostProcessingStep> {
    NSDictionary *_minCharacterLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
