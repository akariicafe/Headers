@class _PXFeedInlinePlaybackController;

@interface _PXFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    long long _desiredPlayState;
}

@property (weak, nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController;

- (void).cxx_destruct;
- (long long)desiredPlayState;
- (void)setDesiredPlayState:(long long)a0;

@end
