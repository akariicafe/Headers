@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation {
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
