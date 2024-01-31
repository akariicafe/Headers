@class CAMSemanticStyle;

@interface CAMSemanticStylesPreviewStyleCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMSemanticStyle *_style;

- (id)initWithSubcommands:(id)a0;
- (id)initWithStyle:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
