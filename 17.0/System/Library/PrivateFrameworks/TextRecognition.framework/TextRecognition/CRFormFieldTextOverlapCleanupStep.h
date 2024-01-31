@class NSString;

@interface CRFormFieldTextOverlapCleanupStep : NSObject <CRFormPostProcessingStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clipRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 intersectionRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 type:(unsigned long long)a2;
+ (id)cleanupTextOverlapForFields:(id)a0 document:(id)a1 underlinedFieldsOnly:(BOOL)a2;

- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
