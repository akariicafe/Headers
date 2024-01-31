@class WebBookmark;
@protocol ReadingListMetadataProvider;

@interface PendingReadingListItem : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) id<ReadingListMetadataProvider> provider;

+ (id)itemWithBookmark:(id)a0 provider:(id)a1;

- (void).cxx_destruct;

@end
