@class NSString;

@interface PKInkKey : NSObject <NSCopying> {
    NSString *_identifier;
    unsigned long long _version;
    NSString *_variant;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
