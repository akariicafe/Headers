@class PKPassTileAccessory, UIImage, PKPassTile, PKPassTileImage, NSAttributedString;

@interface PKPassTileView_State : NSObject {
    PKPassTile *_source;
    BOOL _iconVisible;
    BOOL _titleVisible;
    BOOL _bodyVisible;
    BOOL _spinnerVisible;
    BOOL _buttonVisible;
    BOOL _secondaryImageVisible;
    PKPassTileImage *_icon;
    UIImage *_iconImage;
    PKPassTileAccessory *_accessory;
    PKPassTileAccessory *_secondaryAccessory;
    UIImage *_secondaryImage;
    NSAttributedString *_title;
    NSAttributedString *_body;
    double _validUntil;
}

- (id)init;
- (void).cxx_destruct;

@end
