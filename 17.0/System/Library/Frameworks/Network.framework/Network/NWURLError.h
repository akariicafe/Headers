@class NSDictionary, NSURL, NSError, NSNumber, NSObject;
@protocol OS_nw_path, OS_nw_resolution_report;

@interface NWURLError : NSError

@property (class, readonly, nonatomic) NSDictionary *allUserInfoKeys;

@property (retain, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) NSURL *failingURL;
@property (nonatomic) struct __SecTrust { } *peerTrust;
@property (retain, nonatomic) NSNumber *networkUnavailableReason;
@property (retain, nonatomic) NSNumber *webSocketHandshakeFailureReason;
@property (retain, nonatomic) NSNumber *privacyProxyFailure;
@property (retain, nonatomic) NSNumber *vpnInactiveFailure;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (retain, nonatomic) NSObject<OS_nw_resolution_report> *resolutionReport;

- (void)dealloc;
- (id)userInfo;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fillErrorForLoader:(id)a0 andTask:(id)a1;
- (long long)getConnectionError;
- (long long)translateCodeForError:(struct __CFError { } *)a0;
- (long long)translateDNSError:(long long)a0;
- (long long)translatePOSIXError:(long long)a0;
- (long long)translateTLSError:(long long)a0;

@end
