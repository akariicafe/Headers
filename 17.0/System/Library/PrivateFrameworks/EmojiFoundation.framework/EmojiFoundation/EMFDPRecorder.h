@class NSString, NSLock, EMFEmojiToken;
@protocol EMFDPReportingDelegate;

@interface EMFDPRecorder : NSObject {
    NSLock *_delegateLock;
}

@property (readonly, nonatomic) NSString *recordingKey;
@property (retain) EMFEmojiToken *emoji;
@property (retain) id<EMFDPReportingDelegate> delegate;

- (BOOL)report;
- (void).cxx_destruct;
- (id)initWithEmoji:(id)a0;

@end
