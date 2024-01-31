@class NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *sceneEndpoint;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
