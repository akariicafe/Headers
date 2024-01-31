@class NSString, NSArray;

@interface WFContactFieldParameter : WFParameter

@property (readonly, nonatomic) BOOL allowsTextEntry;
@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) NSString *autocapitalizationType;
@property (readonly, nonatomic) NSString *autocorrectionType;
@property (readonly, nonatomic) NSArray *supportedContactProperties;
@property (readonly, nonatomic) BOOL hidesLabel;
@property (readonly, nonatomic) BOOL allowsCustomHandles;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (BOOL)displaysMultipleValueEditor;
- (Class)multipleStateClass;
- (BOOL)shouldAlignLabels;
- (Class)singleStateClass;

@end
