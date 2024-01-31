@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>

@property (retain, nonatomic) GKLabel *textLabel;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double paragraphMargin;
@property (nonatomic) BOOL shouldApplyGameCenterTheme;
@property (nonatomic) int layoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
