@interface SwiftUITextStorage : NSConcreteTextStorage

@property (nonatomic, setter=_setBaselineDelta:) double _baselineDelta;
@property (nonatomic, setter=_setForceWordWrapping:) BOOL _forceWordWrapping;
@property (nonatomic, setter=_setWrappedByCluster:) BOOL _wrappedByCluster;
@property (nonatomic) double defaultTighteningFactor;

- (BOOL)_isStringDrawingTextStorage;
- (BOOL)_baselineMode;
- (BOOL)_shouldSetOriginalFontAttribute;

@end
