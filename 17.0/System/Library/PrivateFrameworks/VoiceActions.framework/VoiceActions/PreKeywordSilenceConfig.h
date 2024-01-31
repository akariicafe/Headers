@class NSString;

@interface PreKeywordSilenceConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ lookbackFrames;
@property (nonatomic) void /* unknown type, empty encoding */ minSilenceInLookbackFrames;
@property (nonatomic) void /* unknown type, empty encoding */ silenceProbability;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
