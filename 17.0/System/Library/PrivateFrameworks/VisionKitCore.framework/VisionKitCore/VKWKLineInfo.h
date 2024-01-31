@class NSArray;

@interface VKWKLineInfo : VKWKTextInfo

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) BOOL shouldWrap;
@property (nonatomic) unsigned long long layoutDirection;

- (void).cxx_destruct;

@end
