@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {
    unsigned long long _method;
}

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMethod:(unsigned long long)a0;

@end
