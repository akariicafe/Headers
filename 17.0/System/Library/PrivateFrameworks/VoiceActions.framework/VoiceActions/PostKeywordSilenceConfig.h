@class NSString;

@interface PostKeywordSilenceConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ lookForwardFrames;
@property (nonatomic) void /* unknown type, empty encoding */ minSilenceFramesExpected;
@property (nonatomic) void /* unknown type, empty encoding */ silenceProbability;
@property (nonatomic) void /* unknown type, empty encoding */ minSilenceFrameCountAtEndOfKeyword;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
