@class NSString, NSMutableArray;

@interface UARPStandaloneCommandReplyRecord : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_solicitedURLResponses;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *modelNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addResponseURL:(id)a0;
- (id)getResponseURLs;
- (id)initWithModelNumber:(id)a0;

@end
