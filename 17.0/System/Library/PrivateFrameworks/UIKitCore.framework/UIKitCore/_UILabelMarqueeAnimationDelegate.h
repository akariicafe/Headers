@class UILabel, NSString;

@interface _UILabelMarqueeAnimationDelegate : NSObject <CAAnimationDelegate> {
    BOOL _started;
    BOOL _updated;
}

@property (weak, nonatomic) UILabel *label;
@property (nonatomic) BOOL suppressEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
