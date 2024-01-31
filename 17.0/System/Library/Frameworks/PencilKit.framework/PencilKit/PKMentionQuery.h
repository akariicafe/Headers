@class NSSet;

@interface PKMentionQuery : PKDetectionQuery

@property (copy, nonatomic) NSSet *validSuffixes;

- (id)initWithRecognitionSessionManager:(id)a0;
- (void)queryDidUpdateResult:(id)a0;

@end
