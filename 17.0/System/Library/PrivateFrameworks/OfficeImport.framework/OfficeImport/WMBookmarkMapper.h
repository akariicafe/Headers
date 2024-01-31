@class NSString;

@interface WMBookmarkMapper : CMMapper {
    NSString *mName;
    int mBookmarkType;
}

- (void).cxx_destruct;
- (id)initWithWDBookmark:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
