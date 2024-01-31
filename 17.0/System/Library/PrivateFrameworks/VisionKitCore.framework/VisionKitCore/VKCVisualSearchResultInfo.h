@class VKCVisualSearchResultItem, NSString;

@interface VKCVisualSearchResultInfo : NSObject

@property (retain, nonatomic) VKCVisualSearchResultItem *item;
@property (nonatomic) long long domain;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayMessage;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) NSString *infoButtonGlyphName;
@property (readonly, nonatomic) NSString *filledInfoButtonGlyphName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedBoundingRect;

- (void).cxx_destruct;
- (BOOL)_forceDefaultGlyphForDomain:(long long)a0;
- (id)_infoButtonGlyphName;
- (long long)calcDomain;
- (id)initWithResultItem:(id)a0;

@end
