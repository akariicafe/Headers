@class _UISearchTokenAttachmentViewProvider, UISearchToken;

@interface _UISearchTokenAttachment : NSTextAttachment

@property (readonly, nonatomic) _UISearchTokenAttachmentViewProvider *_viewProvider;
@property (readonly, nonatomic) UISearchToken *token;

+ (BOOL)supportsSecureCoding;

- (id)initWithToken:(id)a0;
- (id)init;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (BOOL)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;

@end
