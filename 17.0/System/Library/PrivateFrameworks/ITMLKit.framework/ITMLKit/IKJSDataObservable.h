@class NSArray, JSManagedValue, _IKJSDataDictionaryExporter, JSValue, NSMutableArray;

@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable> {
    JSManagedValue *_managedTargetValue;
    NSMutableArray *_observerRecords;
    _IKJSDataDictionaryExporter *_exporter;
}

@property (readonly, copy, nonatomic) NSArray *parentAccessorSequence;
@property (readonly, weak, nonatomic) IKJSDataObservable *parent;
@property (readonly, weak, nonatomic) JSValue *targetValue;
@property (readonly, nonatomic) BOOL isBoxed;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL observersEnabled;

+ (id)_proxyHandlerForValue:(id)a0 boxed:(BOOL)a1 context:(id)a2;
+ (id)jsExportedProperties;
+ (id)toDataObservable:(id)a0;
+ (id)toDataObservable:(id)a0 proxy:(id *)a1;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)setTargetValue:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTargetValue:(id)a0 boxed:(BOOL)a1;
- (void)_updateValueAtPropertyPath:(id)a0 touch:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)addObserver:(id)a0 forPropertyPathWithString:(id)a1;
- (id)dataDictionaryObject;
- (id)exportValue;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)a0 extraInfo:(id)a1;
- (id)getPropertyPath:(id)a0;
- (id)initWithTargetValue:(id)a0;
- (void)resetValueForPropertyPath:(id)a0;
- (void)setParent:(id)a0 accessorSequence:(id)a1;
- (void)setPropertyPath:(id)a0 :(id)a1;
- (void)setValue:(id)a0 forPropertyPath:(id)a1;
- (void)touchPathWithAccessorSequence:(id)a0 extraInfo:(id)a1;
- (void)touchPropertyPath:(id)a0;
- (id)valueForAccessorSequence:(id)a0 closestParent:(id *)a1 accessorSequenceFromClosestParent:(id *)a2;
- (id)valueForPropertyPath:(id)a0 boxed:(BOOL)a1;

@end
