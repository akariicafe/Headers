@class HIDDevice, NSDictionary;

@interface CLHidDevice : NSObject

@property (nonatomic) HIDDevice *hidDevice;
@property (retain, nonatomic) NSDictionary *matching;

- (void)dealloc;
- (id)initWithHidDevice:(id)a0 matchingDict:(id)a1;
- (BOOL)setReport:(long long)a0 payload:(char *)a1 length:(long long)a2;

@end
