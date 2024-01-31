@class NSArray, AVAssetWriterInput, AVAssetWriterInputGroupInternal;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
    AVAssetWriterInputGroupInternal *_internal;
}

@property (readonly, nonatomic) NSArray *provisionalInputs;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) AVAssetWriterInput *defaultInput;

+ (id)assetWriterInputGroupWithInputs:(id)a0 provisionalInputs:(id)a1 defaultInput:(id)a2;
+ (id)assetWriterInputGroupWithInputs:(id)a0 defaultInput:(id)a1;

- (id)init;
- (void)dealloc;
- (id)options;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (id)initWithInputs:(id)a0 defaultInput:(id)a1;
- (id)initWithInputs:(id)a0 provisionalInputs:(id)a1 defaultInput:(id)a2;

@end
