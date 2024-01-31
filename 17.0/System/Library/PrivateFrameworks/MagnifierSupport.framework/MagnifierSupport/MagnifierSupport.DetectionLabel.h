@class NSString;

@interface MagnifierSupport.DetectionLabel : UITextView {
    void /* unknown type, empty encoding */ kSideInset;
    void /* unknown type, empty encoding */ peopleDetectionText;
    void /* unknown type, empty encoding */ doorDetectionText;
    void /* unknown type, empty encoding */ textDetectionText;
    void /* unknown type, empty encoding */ doorDetectionAnnouncement;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
