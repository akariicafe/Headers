@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment

@property (nonatomic) BOOL inInvalidate;
@property (retain, nonatomic) TSTExpressionNode *expressionNode;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=neverShowsMenu) BOOL neverShowsMenu;
@property (nonatomic) struct CGImage { } *cachedImage;
@property (nonatomic) double cachedImageScreenScale;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 expressionNode:(id)a1;
- (id)detokenizedText;
- (id)copyIntoContext:(id)a0;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1;
- (id)formulaPlainText;
- (void)requestRedraw;

@end
