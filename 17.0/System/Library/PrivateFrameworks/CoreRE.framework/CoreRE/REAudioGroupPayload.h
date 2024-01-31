@class NSArray, NSObject;
@protocol OS_xpc_object;

@interface REAudioGroupPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> *_buffer;
}

@property (readonly, nonatomic) NSArray *payloads;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPayloads:(id)a0;

@end
