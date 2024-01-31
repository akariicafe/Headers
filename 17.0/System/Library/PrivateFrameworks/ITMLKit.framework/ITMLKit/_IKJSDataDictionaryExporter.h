@class NSMutableArray, IKJSDataObservable, IKHandle;

@interface _IKJSDataDictionaryExporter : IKJSObject {
    IKHandle *_dataDictionaryHandle;
    NSMutableArray *_touchedPropertyPaths;
}

@property (readonly, weak, nonatomic) IKJSDataObservable *dataObservable;

+ (id)_dataDictionaryObjectFromObject:(id)a0 forAccessorSequence:(id)a1;
+ (id)_dataDictionaryObjectFromValue:(id)a0 inContext:(id)a1;
+ (id)_dataDictionaryObjectFromValueRef:(struct OpaqueJSValue { } *)a0 inContextRef:(struct OpaqueJSContext { } *)a1;
+ (id)_updatedDataDictionaryObject:(id)a0 fromValue:(id)a1 forPropertyPaths:(id)a2 inContext:(id)a3;

- (void).cxx_destruct;
- (id)dataDictionaryObject;
- (id)initWithAppContext:(id)a0 dataObservable:(id)a1;
- (void)touchPropertyPath:(id)a0;

@end
