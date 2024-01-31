@class NSString;

@interface PXStoryComposabilityScoresArray : NSObject <PXStoryComposabilityResults, NSCopying, NSMutableCopying> {
    struct vector<PXStoryAutoEditComposabilityScores, std::allocator<PXStoryAutoEditComposabilityScores>> { struct *__begin_; struct *__end_; struct __compressed_pair<PXStoryAutoEditComposabilityScores *, std::allocator<PXStoryAutoEditComposabilityScores>> { struct *__value_; } __end_cap_; } _scores;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { float x0; float x1; })composabilityScoresAtIndex:(unsigned long long)a0;
- (id)initWithComposabilityResults:(id)a0;

@end
