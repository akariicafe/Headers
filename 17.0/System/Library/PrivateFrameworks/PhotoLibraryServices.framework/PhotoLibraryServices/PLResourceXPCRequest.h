@class NSString, NSURL;

@interface PLResourceXPCRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) NSURL *assetObjectIDURL;
@property (nonatomic) BOOL wantsProgress;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1;
- (id)initWithTaskIdentifier:(id)a0 assetObjectIDURL:(id)a1;

@end
