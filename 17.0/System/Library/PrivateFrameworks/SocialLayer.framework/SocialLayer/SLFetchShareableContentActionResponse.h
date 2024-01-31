@class SLShareableContentLoadResult;

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentLoadResult *result;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)responseWithResult:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
