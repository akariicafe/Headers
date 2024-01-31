@class LNViewSnippet;

@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithViewSnippet:(id)a0 attribution:(id)a1;

@end
