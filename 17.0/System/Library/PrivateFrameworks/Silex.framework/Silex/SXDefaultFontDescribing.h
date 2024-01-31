@class NSString;
@protocol SXTextStyleFontAttributes;

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXTextStyleFontAttributes> fontAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
