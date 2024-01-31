@class NSURL, UILabel;

@interface _SFURLTextPreviewView : UIView {
    UILabel *_domainLabel;
    UILabel *_urlLabel;
}

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
