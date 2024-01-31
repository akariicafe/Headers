@class NSNumber, NSString;

@interface VUIDropOnTabConfig : NSObject

@property (retain, nonatomic) NSNumber *daysWithoutOpeningThreshold;
@property (retain, nonatomic) NSNumber *daysWithoutPlaybackThreshold;
@property (retain, nonatomic) NSString *dropOnTabIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
