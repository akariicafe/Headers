@class NSData, NSString;

@interface MCMClientCodeSignIndex : NSObject <NSCopying> {
    NSData *_cdhash;
    NSString *_identifier;
}

- (unsigned long long)hash;
- (BOOL)isEqualToClientCodeSignIndex:(id)a0;
- (id)initWithCDHash:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
