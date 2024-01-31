@class NSIndexSet;

@interface NSSingleCompletionCheckingResult : NSCompletionCheckingResult

@property (readonly) unsigned long long stopCompletingIndex;
@property (readonly, copy) NSIndexSet *completeWordIndexes;
@property (readonly) BOOL isPromoted;

+ (BOOL)supportsSecureCoding;

- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)resultType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 completeWordIndexes:(id)a2 isPromoted:(BOOL)a3;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 completeWordIndexes:(id)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 stopCompletingIndex:(unsigned long long)a2;
- (BOOL)isSingleCompletion;

@end
