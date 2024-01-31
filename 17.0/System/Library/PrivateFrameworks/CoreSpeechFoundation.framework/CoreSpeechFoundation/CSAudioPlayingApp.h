@class NSString;

@interface CSAudioPlayingApp : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *version;

- (void).cxx_destruct;
- (id)initWithPid:(int)a0;

@end
