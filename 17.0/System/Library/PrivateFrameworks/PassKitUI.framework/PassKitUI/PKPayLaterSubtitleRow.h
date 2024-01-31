@class UIFont, NSString, UIColor, UIImage;
@protocol NSCopying;

@interface PKPayLaterSubtitleRow : NSObject <PKPayLaterCollectionViewRow> {
    id /* block */ _selectionHandler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *titleIcon;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hideDisclosure;
@property (nonatomic) BOOL excludeFromScreenCapture;
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
- (id)initWithTitle:(id)a0 subtitle:(id)a1 selectionHandler:(id /* block */)a2;
- (BOOL)shouldHighlightItem;

@end
