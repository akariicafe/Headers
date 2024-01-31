@class NSString;

@interface UIKBResizableKeyplaneTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)estimatedProgressForHeight:(double)a0;
+ (id)transformKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)transformationIdentifier;


@end
