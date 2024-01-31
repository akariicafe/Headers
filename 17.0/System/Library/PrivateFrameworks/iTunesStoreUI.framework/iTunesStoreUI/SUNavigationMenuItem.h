@class SUItemContentRating, NSString, NSURL;

@interface SUNavigationMenuItem : NSObject <NSCopying>

@property (readonly, nonatomic) SUItemContentRating *contentRating;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
