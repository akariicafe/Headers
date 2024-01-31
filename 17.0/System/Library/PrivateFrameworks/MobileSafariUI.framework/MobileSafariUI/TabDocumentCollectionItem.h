@class NSString, NSUUID;

@interface TabDocumentCollectionItem : NSObject <TabCollectionItem, NSCopying>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) long long dragState;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
