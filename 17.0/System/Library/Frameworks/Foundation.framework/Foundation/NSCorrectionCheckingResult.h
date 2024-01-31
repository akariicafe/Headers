@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray *_alternativeStrings;
}

+ (BOOL)supportsSecureCoding;

- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)resultType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)alternativeStrings;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 alternativeStrings:(id)a2;

@end
