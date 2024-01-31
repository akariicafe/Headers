@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithParagraph:(id)a0;
- (void)clearProperties;
- (int)runType;

@end
