@class NSString, FBKContentItem, NSDate;

@interface FBKAnnouncement : FBKManagedFeedbackObject <FBKSearchableDocument>

@property (retain) NSString *cachedFullHTMLContent;
@property (retain) NSString *title;
@property (retain) NSString *body;
@property (retain) NSString *type;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *updatedAt;
@property BOOL isStub;
@property BOOL unread;
@property (retain) NSString *searchText;
@property (retain) FBKContentItem *contentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;

@end
