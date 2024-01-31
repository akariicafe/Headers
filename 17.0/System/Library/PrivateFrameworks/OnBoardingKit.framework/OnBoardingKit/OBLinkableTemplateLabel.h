@class UITapGestureRecognizer, NSURL;

@interface OBLinkableTemplateLabel : OBTemplateLabel

@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) NSURL *destinationLink;

- (id)init;
- (void)setLearnMoreURL:(id)a0;
- (void).cxx_destruct;
- (void)_linkTapped:(id)a0;

@end
