@class UIColor, NSString, NSURL, NSDate;
@protocol SUUIArtworkProviding;

@interface SUUICountdown : NSObject {
    BOOL _isLoaded;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long dateFormat;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long initialValue;
@property (nonatomic) long long finalValue;
@property (nonatomic) long long rate;
@property (copy, nonatomic) NSString *numberFormat;
@property (copy, nonatomic) UIColor *fontColor;
@property (copy, nonatomic) UIColor *flapTopColor;
@property (copy, nonatomic) UIColor *flapBottomColor;
@property (nonatomic, getter=isFlapped) BOOL flapped;
@property (retain, nonatomic) id<SUUIArtworkProviding> artworkProvider;
@property (retain, nonatomic) id<SUUIArtworkProviding> endArtworkProvider;

- (void)updateWithDictionary:(id)a0;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (id)initWithCountdownDictionary:(id)a0;

@end
