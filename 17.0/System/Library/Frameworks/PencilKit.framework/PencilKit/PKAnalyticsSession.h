@interface PKAnalyticsSession : NSObject {
    long long _undosPerSession;
    long long _strokesPerSession;
    long long _textLineStraighteningPerSession;
    long long _textLineStraighteningUndoPerSession;
}

- (id)init;

@end
