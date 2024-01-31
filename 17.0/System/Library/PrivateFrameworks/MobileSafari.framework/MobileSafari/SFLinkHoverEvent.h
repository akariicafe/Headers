@class NSURL, NSAttributedString, NSString;

@interface SFLinkHoverEvent : NSObject <SFWebPageStatusBarMessage> {
    NSAttributedString *_attributedMessage;
    BOOL _hasTargetFrame;
    BOOL _targetFrameIsSameAsFrame;
    BOOL _hasFragmentOnSamePage;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) NSAttributedString *attributedMessageString;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_formattedMessage;
- (id)initWithHoveredLinkURL:(id)a0 forCurrentURL:(id)a1 modifierFlags:(long long)a2 frame:(id)a3 targetFrame:(id)a4;

@end
