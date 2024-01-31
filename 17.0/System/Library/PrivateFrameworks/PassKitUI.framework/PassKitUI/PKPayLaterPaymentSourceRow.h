@class NSString, UIImage, PKPayLaterPaymentSource;
@protocol NSCopying;

@interface PKPayLaterPaymentSourceRow : NSObject <PKPayLaterCollectionViewRow> {
    PKPayLaterPaymentSource *_paymentSource;
    id /* block */ _selectionHandler;
}

@property (copy, nonatomic) NSString *overrideSecondaryText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isSelected) BOOL selected;
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
- (id)initWithPayLaterPaymentSource:(id)a0 selectionHandler:(id /* block */)a1;
- (BOOL)shouldHighlightItem;

@end
