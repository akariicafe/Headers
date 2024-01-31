@class NSString, NSArray, NSData, NSMutableArray;

@interface _UIAppearanceRecorder : NSObject {
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}

@property (copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;
@property (nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;
@property (copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;
@property (readonly, nonatomic) NSData *_serializedRepresentation;

+ (id)_sharedAppearanceRecorder;
+ (id)_sharedAppearanceRecorderForClass:(Class)a0 whenContainedIn:(id)a1;
+ (id)_sharedAppearanceRecorderForClassNamed:(id)a0 superclass:(Class)a1 whenContainedIn:(id)a2;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)_applyCustomizations;
- (void)_importCustomizations:(id)a0 withArchiveVersion:(long long)a1;
- (void)_recordInvocation:(id)a0 withClassName:(id)a1 containerClassNames:(id)a2 traitCollection:(id)a3 selectorString:(id)a4 forRemoteProcess:(BOOL)a5;

@end
