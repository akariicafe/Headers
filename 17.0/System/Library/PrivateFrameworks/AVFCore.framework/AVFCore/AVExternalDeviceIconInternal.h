@class NSData;

@interface AVExternalDeviceIconInternal : NSObject {
    struct CGSize { double width; double height; } _size;
    NSData *_data;
    BOOL _prerendered;
}

@end
