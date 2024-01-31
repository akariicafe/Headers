@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying>

@property unsigned long long customType;
@property (retain) NSData *customData;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
