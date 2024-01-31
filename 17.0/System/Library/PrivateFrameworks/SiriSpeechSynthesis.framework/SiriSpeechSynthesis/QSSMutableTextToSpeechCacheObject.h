@class NSData, NSArray;

@interface QSSMutableTextToSpeechCacheObject : QSSTextToSpeechCacheObject

@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)audio:(id /* block */)a0;

@end
