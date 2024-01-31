@class NSString, NSDictionary, NSURL, NSNumber;

@interface VUIExtrasInfo : NSObject <NSCopying> {
    NSDictionary *_extrasDict;
}

@property (readonly, nonatomic) NSNumber *contentRating;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *extrasURLString;
@property (readonly, nonatomic) NSString *previewURLString;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *loadingImage;
@property (readonly, nonatomic) BOOL isLightTheme;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) BOOL isEntitledToPlay;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaItem:(id)a0;

@end
