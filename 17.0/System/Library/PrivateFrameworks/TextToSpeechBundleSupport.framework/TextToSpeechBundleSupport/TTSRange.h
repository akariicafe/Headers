@interface TTSRange : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)description;

@end
