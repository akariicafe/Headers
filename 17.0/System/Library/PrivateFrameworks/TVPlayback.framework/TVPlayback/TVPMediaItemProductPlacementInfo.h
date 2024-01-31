@class NSString, NSNumber;

@interface TVPMediaItemProductPlacementInfo : NSObject

@property (retain, nonatomic) NSString *localizedInfoString;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *imageUrlStringFormat;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocalizedProductPlacementInfoString:(id)a0 duration:(id)a1 andImageURLStringFormat:(id)a2;

@end
