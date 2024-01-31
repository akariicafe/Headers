@class PRPosterColor, NSString, PRTimeFontConfiguration;

@interface PREditingLookProperties : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) PRTimeFontConfiguration *timeFontConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *titlePosterColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeFontConfiguration:(id)a0 titlePosterColor:(id)a1;

@end
