@class NSArray, HACCCapsuleDarkBackground, NSString, UILabel;

@interface _HUIDarkTextView : UIView <MTVisualStylingRequiring>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) HACCCapsuleDarkBackground *darkBackgroundView;
@property (retain, nonatomic) NSArray *defaultLayouts;
@property (retain, nonatomic) NSArray *largeTextLayouts;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
