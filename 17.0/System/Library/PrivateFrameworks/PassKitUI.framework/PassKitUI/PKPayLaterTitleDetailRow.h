@class UIFont, NSString, UIColor, UIImage;
@protocol NSCopying;

@interface PKPayLaterTitleDetailRow : NSObject <PKPayLaterCollectionViewRow> {
    id /* block */ _selectionHandler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *detailColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (nonatomic) BOOL showSpinner;
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
- (id)initWithTitle:(id)a0 detail:(id)a1 selectionHandler:(id /* block */)a2;
- (BOOL)shouldHighlightItem;

@end
