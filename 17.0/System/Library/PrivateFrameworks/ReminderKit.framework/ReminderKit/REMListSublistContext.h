@class REMList;

@interface REMListSublistContext : NSObject

@property (retain, nonatomic) REMList *list;

- (id)initWithList:(id)a0;
- (id)fetchListsWithError:(id *)a0;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (void).cxx_destruct;

@end
