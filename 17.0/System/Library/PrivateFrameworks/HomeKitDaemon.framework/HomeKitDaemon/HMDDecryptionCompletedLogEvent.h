@interface HMDDecryptionCompletedLogEvent : HMMLogEvent

@property (readonly) BOOL didDecryptionFail;

+ (id)decryptionCompletedWithFailure:(BOOL)a0;

- (id)initWithFailure:(BOOL)a0;

@end
