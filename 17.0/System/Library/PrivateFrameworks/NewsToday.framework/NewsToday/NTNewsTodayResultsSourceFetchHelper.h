@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (id)init;
- (id)initWithSectionQueueDescriptors:(id)a0;
- (void).cxx_destruct;
- (void)removeSectionDescriptors:(id)a0;
- (id)sectionDescriptorsAtHeadsOfQueues;

@end
