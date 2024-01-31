@class UITextView, NSArray, NSString, NSURL, NSMutableDictionary;

@interface PSFooterMultiHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {
    NSMutableDictionary *_rangeLinkSpecMap;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSArray *linkSpecs;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_linkify;
- (id)initWithSpecifier:(id)a0;
- (void)refreshContentsWithSpecifier:(id)a0;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)a0;
- (void)setupSubviewsAndContstraints;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_addLinkSpec:(id)a0 toAttrStr:(id)a1;
- (BOOL)isValidLinkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
