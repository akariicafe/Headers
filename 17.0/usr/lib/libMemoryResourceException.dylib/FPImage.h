@class NSString;

@interface FPImage : NSObject {
    unsigned char _segment;
    unsigned long long _start;
    unsigned long long _size;
    NSString *_name;
    NSString *_ownerPath;
}

- (void).cxx_destruct;

@end
