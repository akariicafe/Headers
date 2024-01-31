@interface NEIKEv2PRFProtocol : NSObject <NSCopying> {
    unsigned long long _type;
}

@property (readonly) unsigned long long type;

- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
