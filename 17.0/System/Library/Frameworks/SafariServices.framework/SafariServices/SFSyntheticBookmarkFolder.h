@class NSString, WebBookmarkList;

@interface SFSyntheticBookmarkFolder : NSObject

@property (retain, nonatomic) WebBookmarkList *bookmarkList;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmarkList:(id)a0 title:(id)a1;

@end
