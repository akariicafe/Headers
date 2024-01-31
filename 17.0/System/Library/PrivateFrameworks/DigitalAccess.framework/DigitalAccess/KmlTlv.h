@class NSData;

@interface KmlTlv : NSObject {
    unsigned short _tag;
    NSData *_value;
}

- (id)description;
- (void).cxx_destruct;

@end
