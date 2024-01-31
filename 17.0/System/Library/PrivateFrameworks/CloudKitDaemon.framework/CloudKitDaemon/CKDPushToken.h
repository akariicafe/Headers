@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (readonly, copy, nonatomic) NSString *apsEnvironmentString;
@property (readonly, copy, nonatomic) NSData *apsToken;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAPSEnvironmentString:(id)a0 apsToken:(id)a1;

@end
