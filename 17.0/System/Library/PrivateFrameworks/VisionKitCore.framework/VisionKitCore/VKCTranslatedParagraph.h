@class NSString, VKQuad;

@interface VKCTranslatedParagraph : NSObject

@property (readonly, nonatomic) VKQuad *quad;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isPassthrough;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 quad:(id)a1 isPassthrough:(BOOL)a2;

@end
