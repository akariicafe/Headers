@class NSString, NSData, NSObject;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionBroadcastParameter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupSessionID;
@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:(id /* block */)a0;
- (id)initWithGroupSessionID:(id)a0 salt:(id)a1 serviceName:(id)a2;
- (id)initWithGroupSessionID:(id)a0 serviceName:(id)a1;

@end
