@class UIFont, NSString, UIColor, UIImage;
@protocol NSCopying;

@interface PKPayLaterTileDetailIconRow : NSObject <PKPayLaterCollectionViewRow>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) double additionalIconPadding;
@property (nonatomic) BOOL centerTitleText;
@property (nonatomic) BOOL centerDetailText;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 detail:(id)a1 iconImage:(id)a2;
- (void)configureCell:(id)a0;

@end
