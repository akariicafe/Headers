@class NSString;
@protocol UIContentConfiguration;

@interface _TtC5UIKitP33_032FEC8E4679353098E3539CFE2B632720_UICustomContentView : UIView <_UIContentViewInternal> {
    void /* unknown type, empty encoding */ wrappedContentView;
}

@property (nonatomic, retain) id<UIContentConfiguration> configuration;
@property (nonatomic, readonly) NSString *description;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)supportsConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_wrappedContentView;

@end
