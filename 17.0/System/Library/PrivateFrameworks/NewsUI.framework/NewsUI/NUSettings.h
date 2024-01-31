@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>

@property (readonly, nonatomic) BOOL shouldShowArticlesInExcerptMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
