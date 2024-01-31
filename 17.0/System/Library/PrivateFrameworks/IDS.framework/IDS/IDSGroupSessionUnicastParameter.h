@class NSString, NSData, NSObject;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupSessionID;
@property (readonly, nonatomic) unsigned long long localParticipantID;
@property (readonly, nonatomic) unsigned long long remoteParticipantID;
@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) unsigned long long connectionIndex;
@property (readonly, nonatomic) long long dataMode;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property int socket;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)a0;
- (void)_setUpNWConnectionforTesting:(id /* block */)a0;
- (id)initWithConnectedSocket:(int)a0 dataMode:(long long)a1 connectionIndex:(unsigned long long)a2;
- (id)initWithGroupSessionID:(id)a0 localParticipantID:(unsigned long long)a1 remoteParticipantID:(unsigned long long)a2 dataMode:(long long)a3 connectionIndex:(unsigned long long)a4;
- (id)initWithGroupSessionID:(id)a0 localParticipantID:(unsigned long long)a1 remoteParticipantID:(unsigned long long)a2 salt:(id)a3 dataMode:(long long)a4 connectionIndex:(unsigned long long)a5;
- (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)a0;

@end
