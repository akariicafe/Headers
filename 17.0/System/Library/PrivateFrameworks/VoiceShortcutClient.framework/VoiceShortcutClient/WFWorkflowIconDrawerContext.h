@class NSSet;

@interface WFWorkflowIconDrawerContext : NSObject

@property (readonly, nonatomic) struct CGFont { } *glyphFont;
@property (readonly, nonatomic) NSSet *coreGlyphsCatalogs;
@property (readonly, nonatomic) struct __CTFont { } *glyphTestFont;

+ (id)cachedContextOrNewContext;
+ (double)glyphTestFontSize;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CTFont { } *)newGlyphFontForSize:(double)a0;

@end
