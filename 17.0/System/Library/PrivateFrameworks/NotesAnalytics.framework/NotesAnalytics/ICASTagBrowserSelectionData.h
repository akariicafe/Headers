@class NSString, NSNumber;

@interface ICASTagBrowserSelectionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfSelectedTags;
@property (readonly, nonatomic) NSNumber *isAllTagsSelected;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfSelectedTags:(id)a0 isAllTagsSelected:(id)a1;

@end
