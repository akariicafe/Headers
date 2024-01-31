@class NSString, NSMutableDictionary, NSData, NSURL;

@interface SSVPlaybackLeaseRequest : NSObject <NSCopying> {
    NSURL *_certificateURL;
}

@property (readonly, copy, nonatomic, getter=_actionParameterValue) NSString *_actionParameterValue;
@property (readonly, copy, nonatomic, getter=_URLBagKey) NSString *_URLBagKey;
@property (nonatomic, getter=_actionType, setter=_setActionType:) long long _actionType;
@property (readonly, nonatomic, getter=_leaseType) long long _leaseType;
@property (nonatomic, getter=_KDMovieIdentifier, setter=_setKDMovieIdentifier:) unsigned long long _KDMovieIdentifier;
@property (copy, nonatomic, getter=_certificateData, setter=_setCertificateData:) NSData *_certificateData;
@property (copy, nonatomic, getter=_URL, setter=_setURL:) NSURL *_URL;
@property (nonatomic) unsigned long long KDChannelIdentifier;
@property (copy, nonatomic) NSMutableDictionary *parameterValues;
@property (copy, nonatomic) NSMutableDictionary *HTTPHeaderFields;
@property (nonatomic) BOOL startsLeaseSession;

+ (id)_requestWithType:(long long)a0;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)valueForHTTPHeaderField:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applyValuesToCopy:(id)a0;
- (id)_copyBodyDictionaryWithFairPlaySession:(void **)a0;
- (id)_copyWithLeaseType:(long long)a0;
- (void)setValue:(id)a0 forParameter:(id)a1;
- (id)valueForParameter:(id)a0;

@end
