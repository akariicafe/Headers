@class NSString, UIView;

@interface AFUISiriRemoteContainerView : UIView <AFUISiriRemoteViewHosting>

@property (retain, nonatomic) UIView *remoteContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
