@class NSUUID, NSString, NSObject;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    NSUUID *_oneshot;
    NSString *_eDesc;
    int _targetPID;
    unsigned int _invalidationGeneration;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
