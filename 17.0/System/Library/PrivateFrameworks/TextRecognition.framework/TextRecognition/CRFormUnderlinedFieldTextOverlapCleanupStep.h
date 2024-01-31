@class NSString;

@interface CRFormUnderlinedFieldTextOverlapCleanupStep : NSObject <CRFormPostProcessingStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
