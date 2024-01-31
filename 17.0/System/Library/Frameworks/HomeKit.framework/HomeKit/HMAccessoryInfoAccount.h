@class NSString;

@interface HMAccessoryInfoAccount : NSObject

@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *aaAltDSID;
@property (readonly, copy) NSString *amsAltDSID;
@property (readonly) BOOL signedIn;

- (unsigned long long)hash;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUsername:(id)a0 aaAltDSID:(id)a1 amsAltDSID:(id)a2 signedIn:(BOOL)a3;
- (id)protoData;
- (id)protoPayload;

@end
