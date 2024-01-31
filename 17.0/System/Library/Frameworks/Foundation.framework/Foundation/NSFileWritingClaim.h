@class NSURL, NSFileAccessNode;

@interface NSFileWritingClaim : NSFileAccessClaim {
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
}

+ (BOOL)supportsSecureCoding;

- (void)devalueSelf;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (void)dealloc;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void)protectFilesAgainstEviction;
- (void)granted;
- (id)allURLs;
- (BOOL)blocksClaim:(id)a0;
- (void)invokeClaimer;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)a0;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;

@end
