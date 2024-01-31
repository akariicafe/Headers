@class UIImage, NSString, NSArray;

@interface _WBSTabGroupIconMetadata : NSObject {
    NSString *_uuid;
    NSArray *_tabUrlArray;
}

@property (copy) UIImage *iconImage;
@property (retain, nonatomic) id token;

- (id)_configuration;
- (void).cxx_destruct;
- (id)initWithTabGroup:(id)a0 token:(id)a1;
- (BOOL)hasSameIconAsTabGroup:(id)a0;
- (id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)a0;

@end
