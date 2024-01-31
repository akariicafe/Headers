@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMGridOverlayConfig : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMRGBAColor *gridColor;
@property (nonatomic) BOOL showLineNames;
@property (nonatomic) BOOL showLineNumbers;
@property (nonatomic) BOOL showExtendedGridLines;
@property (nonatomic) BOOL showTrackSizes;
@property (nonatomic) BOOL showAreaNames;

- (id)initWithGridColor:(id)a0;

@end
