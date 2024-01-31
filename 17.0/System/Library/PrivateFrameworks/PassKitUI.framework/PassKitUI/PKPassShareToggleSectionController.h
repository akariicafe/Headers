@class NSString, UIImage;
@protocol PKPassShareToggleSectionControllerDelegate;

@interface PKPassShareToggleSectionController : PKPassShareSectionController {
    NSString *_identifier;
    NSString *_title;
    BOOL _isEditable;
}

@property (weak, nonatomic) id<PKPassShareToggleSectionControllerDelegate> delegate;
@property (weak, nonatomic) NSString *footerText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL toggleValue;

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)a0;
- (void)decorateCell:(id)a0 forIdentifier:(id)a1;
- (id)footerAttributedStringForIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 toggleValue:(BOOL)a2 isEditable:(BOOL)a3 delegate:(id)a4;
- (BOOL)shouldHighlightItem:(id)a0;
- (void)toggleValueDidChange:(id)a0;

@end
