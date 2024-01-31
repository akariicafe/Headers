@class BMStream, BMSource, NSString;

@interface SCUIAnalytics : NSObject

@property (retain, nonatomic) BMStream *biomeSCUIStream;
@property (retain, nonatomic) BMSource *biomeSCUISource;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) int ageGroup;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)biomeAgeGroup;
- (BOOL)collectUIInteractionEvent:(int)a0 :(int)a1 :(int)a2 :(int)a3 :(int)a4;

@end
