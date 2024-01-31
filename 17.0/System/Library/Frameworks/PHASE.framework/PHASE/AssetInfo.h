@class NSString;

@interface AssetInfo : NSObject {
    NSString *identifier;
    NSString *type;
    unsigned long long sizeInBytes;
}

- (void).cxx_destruct;

@end
