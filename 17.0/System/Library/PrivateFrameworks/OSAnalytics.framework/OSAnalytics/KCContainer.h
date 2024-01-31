@class NSMutableDictionary;

@interface KCContainer : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned long long tag;
@property (readonly, nonatomic) NSMutableDictionary *data;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSMutableDictionary *truncated_threads;
@property (nonatomic) int unindexed_frames;
@property (nonatomic) int invalid_images;

- (void).cxx_destruct;
- (id)initWithKCData:(struct kcdata_iter { struct kcdata_item *x0; void *x1; })a0;
- (void)omit;

@end
