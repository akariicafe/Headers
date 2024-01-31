@class NSString;

@interface MRUVolumeNowPlayingInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *formatDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleID:(id)a0 name:(id)a1 formatDescription:(id)a2;

@end
