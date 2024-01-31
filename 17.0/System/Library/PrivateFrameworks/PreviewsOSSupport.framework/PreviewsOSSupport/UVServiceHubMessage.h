@class NSString, NSObject;
@protocol NSSecureCoding;

@interface UVServiceHubMessage : NSObject

@property (readonly, nonatomic) NSString *messageType;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *payload;
@property (readonly, nonatomic) id /* block */ replyHandler;

- (void).cxx_destruct;
- (id)initWithMessageType:(id)a0 payload:(id)a1 replyHandler:(id /* block */)a2;

@end
