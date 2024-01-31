@class NSString, PKToolConfiguration;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool>

@property (copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isHandwritingTool;

@end
