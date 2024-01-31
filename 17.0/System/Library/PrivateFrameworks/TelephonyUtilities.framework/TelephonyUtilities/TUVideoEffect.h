@class NSString, UIImage;

@interface TUVideoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *thumbnailImage;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 thumbnailImage:(id)a1;
- (BOOL)isEqualToEffect:(id)a0;

@end
