@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;
@property (nonatomic) long long fallbackClassification;

- (id)description;
- (BOOL)adjustSupportByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1 strokeClassification:(long long)a2;
- (BOOL)adjustSupportByRemovingStrokeIdentifier:(id)a0;
- (void)setFallbackClassification:(long long)a0;
- (void)setSupportByStrokeIdentifier:(id)a0;

@end
