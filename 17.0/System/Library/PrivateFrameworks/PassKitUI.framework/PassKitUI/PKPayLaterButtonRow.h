@class UIColor, NSString, UIImage, NSAttributedString;
@protocol NSCopying;

@interface PKPayLaterButtonRow : NSObject <PKPayLaterCollectionViewRow> {
    NSAttributedString *_title;
    id /* block */ _selectionHandler;
}

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 selectionHandler:(id /* block */)a1;
- (void)configureCell:(id)a0;
- (void)handleCellSelection;
- (BOOL)shouldHighlightItem;

@end
