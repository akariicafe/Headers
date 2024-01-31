@class NSUUID, TUSandboxExtendedURL;

@interface TUMomentsRawVideoMessageDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSUUID *uuid;
@property (readonly, retain, nonatomic) TUSandboxExtendedURL *videoURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 videoURL:(id)a1;

@end
