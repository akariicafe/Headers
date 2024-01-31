@class NSString, VUIPlaybackTabDetails, NSArray;

@interface VUIPlaybackTabInfo : NSObject

@property (retain, nonatomic) NSString *canonicalId;
@property (retain, nonatomic) NSString *adamId;
@property (readonly, nonatomic) BOOL isInfoTabAllowed;
@property (readonly, nonatomic) VUIPlaybackTabDetails *multiviewTabInfo;
@property (readonly, nonatomic) NSArray *tabDetails;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
