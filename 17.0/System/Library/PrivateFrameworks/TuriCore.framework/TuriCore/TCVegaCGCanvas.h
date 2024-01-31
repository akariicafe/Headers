@class TCVegaCGContext;

@interface TCVegaCGCanvas : TCVegaHTMLElement <TCVegaCGCanvasInterface>

@property (retain, nonatomic) TCVegaCGContext *context;
@property double width;
@property double height;

- (id)init;
- (void).cxx_destruct;
- (id)getContext:(id)a0;

@end
