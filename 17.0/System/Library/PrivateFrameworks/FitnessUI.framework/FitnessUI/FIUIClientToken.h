@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying> {
    NSUUID *_UUID;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithUUID:(id)a0;

@end
