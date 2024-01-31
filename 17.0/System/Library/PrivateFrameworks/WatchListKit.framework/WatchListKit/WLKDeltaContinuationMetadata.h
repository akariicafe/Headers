@class NSURL, NSString;

@interface WLKDeltaContinuationMetadata : WLKContinuationMetadataBase

@property (readonly, nonatomic) long long deltaType;
@property (readonly, nonatomic) NSURL *playbackURL;
@property (readonly, nonatomic) NSString *adamID;

+ (long long)_deltaTypeForString:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;

@end
