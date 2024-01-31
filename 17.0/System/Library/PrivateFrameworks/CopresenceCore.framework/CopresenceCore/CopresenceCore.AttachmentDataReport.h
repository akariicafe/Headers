@interface CopresenceCore.AttachmentDataReport : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isUpload;
    void /* unknown type, empty encoding */ assetTotalSize;
    void /* unknown type, empty encoding */ isServerBlocked;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
