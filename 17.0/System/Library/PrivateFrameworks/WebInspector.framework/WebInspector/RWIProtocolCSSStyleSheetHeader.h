@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSString *frameId;
@property (copy, nonatomic) NSString *sourceURL;
@property (nonatomic) long long origin;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL isInline;
@property (nonatomic) double startLine;
@property (nonatomic) double startColumn;

- (id)initWithStyleSheetId:(id)a0 frameId:(id)a1 sourceURL:(id)a2 origin:(long long)a3 title:(id)a4 disabled:(BOOL)a5 isInline:(BOOL)a6 startLine:(double)a7 startColumn:(double)a8;

@end
