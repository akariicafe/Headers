@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) SSURLRequestProperties *URLRequestProperties;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
