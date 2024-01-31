@class NSString;

@interface VUIPlaybackTabDetails : NSObject

@property (readonly, nonatomic) NSString *tabId;
@property (readonly, nonatomic) NSString *title;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
