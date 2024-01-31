@class NSString, UITraitCollection;

@interface CKMessageEntrySolidColorBackgroundView : UIView <CKMessageEntryBackgroundViewProtocol>

@property (retain, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long style;

@end
