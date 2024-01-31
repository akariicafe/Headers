@class NSString;

@interface MRNowPlayingAudioFormatApplication : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 displayName:(id)a1;

@end
