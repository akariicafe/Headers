@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (nonatomic) int startLine;
@property (nonatomic) int startColumn;
@property (nonatomic) int endLine;
@property (nonatomic) int endColumn;

- (id)initWithStartLine:(int)a0 startColumn:(int)a1 endLine:(int)a2 endColumn:(int)a3;

@end
