@class NSString;

@interface _MFDADeferredSetFlagsOperation : _MFOfflineCacheOperation {
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
