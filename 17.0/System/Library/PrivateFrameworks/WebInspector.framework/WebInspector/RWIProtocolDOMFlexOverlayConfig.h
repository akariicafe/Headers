@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMFlexOverlayConfig : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDOMRGBAColor *flexColor;
@property (nonatomic) BOOL showOrderNumbers;

- (id)initWithFlexColor:(id)a0;

@end
