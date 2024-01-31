@class NSString;

@interface GamePolicy.GamePolicyAgentUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userIdentifiedGames;
    void /* unknown type, empty encoding */ consoleModeSignalingGames;
    void /* unknown type, empty encoding */ consoleModeUserDisabledGames;
    void /* unknown type, empty encoding */ consoleModeEnabled;
    void /* unknown type, empty encoding */ consoleModePausedByUser;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
