@class CKBalloonView;

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) long long animationPauseReasons;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)prepareForReuse;
- (void)addFilter:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clearFilters;
- (id)_balloonViewForChatItem:(id)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;

@end
