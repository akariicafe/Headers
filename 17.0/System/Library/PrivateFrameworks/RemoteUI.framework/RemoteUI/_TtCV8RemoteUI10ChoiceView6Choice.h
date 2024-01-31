@class RUIElement;

@interface _TtCV8RemoteUI10ChoiceView6Choice : RUIElement {
    void /* unknown type, empty encoding */ activityIndicatorCount;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ startActivityBlock;
    void /* unknown type, empty encoding */ stopActivityBlock;
    void /* unknown type, empty encoding */ buttonType;
    void /* unknown type, empty encoding */ parentElement;
    void /* unknown type, empty encoding */ setEnabled;
    void /* unknown type, empty encoding */ setTitle;
}

@property (nonatomic, readonly) RUIElement *parent;

- (id)init;
- (void).cxx_destruct;
- (void)stopActivityIndicator;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)pageDidChange;
- (void)startActivityIndicator;
- (id)staticValues;
- (void)tappedWithSender:(id)a0;

@end
