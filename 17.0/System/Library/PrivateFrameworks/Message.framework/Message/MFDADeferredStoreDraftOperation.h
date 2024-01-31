@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation {
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageIDHeader:(id)a0 mailbox:(id)a1;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
