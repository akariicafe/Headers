@class UIColor, UIFont, NSString, UIImage;
@protocol NSCopying;

@interface PKPayLaterTitleDetailValueRow : NSObject <PKPayLaterCollectionViewRow> {
    NSString *_title;
    NSString *_detail;
    NSString *_value;
    id /* block */ _selectionHandler;
}

@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImage *detailIcon;
@property (retain, nonatomic) UIColor *detailColor;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *valueColor;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double labelPadding;
@property (nonatomic) unsigned long long accessory;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelection;
- (id)initWithTitle:(id)a0 detail:(id)a1 value:(id)a2 accessory:(unsigned long long)a3 selectionHandler:(id /* block */)a4;
- (BOOL)shouldHighlightItem;

@end
