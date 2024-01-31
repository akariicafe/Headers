@class NSString;

@interface DecoderConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ useChecker;
@property (nonatomic, retain) void /* unknown type, empty encoding */ preKeywordSilence;
@property (nonatomic, retain) void /* unknown type, empty encoding */ duringKeywordSilence;
@property (nonatomic, retain) void /* unknown type, empty encoding */ postKeywordSilence;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audioCapture;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
