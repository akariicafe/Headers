@class NSString, NSDictionary, NSURL, NSDate, NSArray;

@interface CKLTrafficLogMessage : NSObject {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ requestTime;
    void /* unknown type, empty encoding */ requestMethod;
    void /* unknown type, empty encoding */ requestURL;
    void /* unknown type, empty encoding */ requestHeaders;
    void /* unknown type, empty encoding */ requestObjects;
    void /* unknown type, empty encoding */ responseTime;
    void /* unknown type, empty encoding */ responseHeaders;
    void /* unknown type, empty encoding */ responseObjects;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSDate *requestTime;
@property (nonatomic, readonly) NSString *requestMethod;
@property (nonatomic, readonly) NSURL *requestURL;
@property (nonatomic, readonly) NSDictionary *requestHeaders;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bodyStreamResetCount;
@property (nonatomic, readonly) NSArray *requestObjects;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ responseStatus;
@property (nonatomic, readonly) NSDate *responseTime;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, readonly) NSArray *responseObjects;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUuid:(id)a0 requestMetadata:(id)a1 requestObjects:(id)a2 bodyStreamResetCount:(long long)a3 responseMetadata:(id)a4 responseObjects:(id)a5;

@end
