@class TCVegaJSDocument, NSString, JSContext, TCVegaCGCanvas;

@interface TCVegaRenderer : NSObject

@property (retain, nonatomic) NSString *spec;
@property (retain, nonatomic) TCVegaCGCanvas *vegaCanvas;
@property (retain, nonatomic) TCVegaJSDocument *vegaJSDocument;
@property (nonatomic) double scaleFactor;
@property (retain) JSContext *context;

+ (id)vegaJS;
+ (id)vegaliteJS;
+ (id)vg2canvasJS;

- (id)cursor;
- (id)init;
- (unsigned long long)height;
- (struct CGImage { } *)CGImage;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)initWithSpec:(id)a0;
- (id)initWithSpec:(id)a0 config:(id)a1 scaleFactor:(double)a2;
- (void)triggerEventWithType:(id)a0 event:(id)a1;
- (id)vegaContext;

@end
