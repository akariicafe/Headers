@class NSString, NSDictionary, NSMutableDictionary, MPCQueueController;

@interface MPCQueueControllerEdit : NSObject {
    NSMutableDictionary *_suggestedContentItemIDs;
    BOOL _committed;
}

@property (readonly, nonatomic) MPCQueueController *queueController;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL allowsChangingCurrentItem;
@property (readonly, copy, nonatomic) NSString *suggestedStartingContentItemID;
@property (readonly, copy, nonatomic) NSDictionary *suggestedContentItemIDsForDeletedContentItemIDs;

- (void)dealloc;
- (void)commit;
- (void)rollback;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueueController:(id)a0 label:(id)a1;
- (void)setSuggestedContentItemID:(id)a0 forDeletedContentItemID:(id)a1;
- (void)setSuggestedContentItemIDForStart:(id)a0;

@end
