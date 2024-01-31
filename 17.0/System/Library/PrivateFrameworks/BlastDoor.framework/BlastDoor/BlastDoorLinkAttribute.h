@class NSString, NSURL;

@interface BlastDoorLinkAttribute : NSObject {
    void /* unknown type, empty encoding */ linkAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSURL *link;

- (id)init;
- (void).cxx_destruct;

@end
