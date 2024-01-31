@class NSString;

@interface AXKonaMarker : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalStringRange;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int framePosition;

- (void).cxx_destruct;

@end
