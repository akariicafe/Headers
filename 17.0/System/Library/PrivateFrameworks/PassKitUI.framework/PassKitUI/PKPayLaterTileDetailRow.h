@class NSString, UIView;
@protocol NSCopying;

@interface PKPayLaterTileDetailRow : NSObject <PKPayLaterCollectionViewRow> {
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_text;
    NSString *_detailText;
    NSString *_textSubtitle;
    UIView *_customView;
    id /* block */ _selectionHandler;
}

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
- (id)initWithTitleText:(id)a0 subtitleText:(id)a1 text:(id)a2 detailText:(id)a3 textSubtitle:(id)a4 customView:(id)a5 selectionHandler:(id /* block */)a6;
- (BOOL)shouldHighlightItem;

@end
