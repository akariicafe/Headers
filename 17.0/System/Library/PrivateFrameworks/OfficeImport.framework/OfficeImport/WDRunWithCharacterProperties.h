@class WDCharacterProperties;

@interface WDRunWithCharacterProperties : WDRun

@property (retain) WDCharacterProperties *properties;
@property (readonly, getter=isHidden) BOOL hidden;

- (void).cxx_destruct;
- (id)initWithParagraph:(id)a0;
- (void)clearProperties;

@end
