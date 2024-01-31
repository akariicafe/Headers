@class NSString;

@interface RuntimeConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ audioDebug;
@property (nonatomic) void /* unknown type, empty encoding */ batchDecode;
@property (nonatomic) void /* unknown type, empty encoding */ preKeywordSilence;
@property (nonatomic) void /* unknown type, empty encoding */ duringKeywordSilence;
@property (nonatomic) void /* unknown type, empty encoding */ postKeywordSilence;
@property (nonatomic) void /* unknown type, empty encoding */ secondPass;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
