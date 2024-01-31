@class NSString, WebBookmark, NSURL;

@interface ContinuousReadingItem : NSObject

@property (retain, nonatomic, setter=_setReadingListBookmark:) WebBookmark *readingListBookmark;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *previewText;
@property (readonly, retain, nonatomic) NSURL *URL;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)itemWithReadingListItem:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithReadingListItem:(id)a0;
- (void)_readingListItemDidUpdate:(id)a0;
- (id)_siteNameForReadingListItem;

@end
