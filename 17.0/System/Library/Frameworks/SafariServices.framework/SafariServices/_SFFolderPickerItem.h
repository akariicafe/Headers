@class SFSyntheticBookmarkFolder, WebBookmark, NSString;

@interface _SFFolderPickerItem : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) SFSyntheticBookmarkFolder *syntheticFolder;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long depth;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)a0 syntheticFolder:(id)a1 depth:(unsigned long long)a2;

@end
