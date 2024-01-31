@class NSString, TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) NSString *wordBucketCategory;
@property (nonatomic) BOOL isAutocorrection;

- (id)description;
- (void).cxx_destruct;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 wordBucketCategory:(id)a3 isAutocorrection:(BOOL)a4;
- (void)reportToSession:(id)a0;

@end
