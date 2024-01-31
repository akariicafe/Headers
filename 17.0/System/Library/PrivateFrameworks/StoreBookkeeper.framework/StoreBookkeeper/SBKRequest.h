@class NSString, NSDictionary, NSData, ISDataProvider, NSURL, SBKTransaction;

@interface SBKRequest : NSObject {
    NSURL *_requestURL;
    NSString *_action;
    long long _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
}

@property (retain, nonatomic) SBKTransaction *transaction;
@property (readonly, nonatomic, getter=isConcurrent) BOOL concurrent;
@property (nonatomic) long long method;
@property (readonly, nonatomic) double timeoutInterval;
@property (nonatomic) BOOL shouldAuthenticate;
@property (nonatomic) BOOL includeDeviceGUID;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) ISDataProvider *responseDataProvider;

+ (long long)bodyContentType;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)a0;
+ (id)_contentTypeStringForBodyContentType:(long long)a0;
+ (id)_methodStringForMethod:(long long)a0;
+ (long long)bodyContentEncodingType;
+ (id)requestWithRequestURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forArgument:(id)a1;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)a0;
- (id)newURLOperation;
- (id)_defaultHeaderFields;
- (id)copyRequestProperties;
- (id)descriptionWithoutHeaderFields;
- (id)initWithRequestURL:(id)a0;
- (id)newURLOperationWithDelegate:(id)a0;
- (void)setBodyDataWithPropertyList:(id)a0;

@end
